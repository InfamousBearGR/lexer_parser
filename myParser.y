%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int yylex();
void yyerror (char *);
extern FILE * yyin;
extern int * yylineno;
extern void substring(char*, char*, int, int);
// identifiers
char ids[256][256] = {0};
void addId(char *);
int idExists(char *);
// functions
char funcs[256][256] = {0};
void addFunc(char *);
int funcExists(char *);
// structs
char structs[256][256] = {0};
void addStruct(char *);
int structExists(char *);
// type names
char typeNames[256][256] = {0};
void addTypeName(char *);
int typeNameExists(char *);

void undeclaredError(char * id);
%}

%union
{
    int intValue;
    char *stringValue;
}

%token DIGITS
%token CHARACTER
%token PROGRAM
%token FUNCTION
%token VARS
%token CHAR
%token INTEGER
%token END_FUNCTION
%token RETURN
%token STARTMAIN
%token ENDMAIN
%token IF
%token THEN
%token ELSEIF
%token ENDIF
%token WHILE
%token ENDWHILE
%token FOR
%token TO
%token STEP
%token ENDFOR
%token BREAK
%token PRINT
%token SWITCH
%token CASE
%token DEFAULT
%token ENDSWITCH
%token AND
%token OR
%token VARNAME
%token SEMICOLON
%token STRING
%token COMP
%token ELSE
%token STRUCT
%token ENDSTRUCT
%token TYPEDEF

%start file

%%

file: PROGRAM structs functions main	{;}
	| PROGRAM functions main			{;}
	| PROGRAM structs main				{;}
    | PROGRAM main 						{;}
	;

structs: struct
	   | struct structs
	   ;

declarations: VARS declaration
	   		| declarations declaration
	   		;

struct: STRUCT declarations ENDSTRUCT	{char newId[256]; substring(newId, $<stringValue>1, 7, strlen($<stringValue>1)-1); addStruct(newId);}
	  | TYPEDEF STRUCT declarations VARNAME ENDSTRUCT {char newId[256]; substring(newId, $<stringValue>2, 7, strlen($<stringValue>2)-1);if(strcmp(newId, $<stringValue>4) == 0){addStruct(newId);addTypeName(newId);}else{yyerror("TYPEDEF STRUCT name different than ENDSTRUCT name!");YYERROR;}}
	  ;

main: STARTMAIN declarations block ENDMAIN		{;}
	| STARTMAIN declarations ENDMAIN			{;}
	| STARTMAIN block ENDMAIN					{;}
	| STARTMAIN ENDMAIN 						{;}
	;

block: statement			{$<intValue>$ = $<intValue>1;}
	 | statement block		{$<intValue>$ = $<intValue>1 || $<intValue>2;}
	 ;

statement: print 					{$<intValue>$ = 0;}
		 | assignment				{$<intValue>$ = 0;}
		 | if						{$<intValue>$ = 0;}
		 | for						{$<intValue>$ = 0;}
		 | while					{$<intValue>$ = 0;}
		 | switch					{$<intValue>$ = 0;}
		 | break					{$<intValue>$ = 0;}
		 | invocation SEMICOLON		{$<intValue>$ = 0;}
		 | return					{$<intValue>$ = 1;}
		 ;

print: PRINT '(' STRING ')' SEMICOLON							{;}
	 | PRINT '(' STRING ',' print_var_list ')' SEMICOLON		{;}
	 ;

invocation: VARNAME '(' parameter_list ')' 		{if(funcExists($<stringValue>1) == 0){undeclaredError($<stringValue>1);YYERROR;}}

parameter_list: expression 						{;}
			  | expression ',' parameter_list	{;}
			  ;

declaration: var_type var_list SEMICOLON 		{;}
	
assignment: VARNAME '=' expression SEMICOLON	{if(idExists($<stringValue>1) == 0){undeclaredError($<stringValue>1);YYERROR;}}
		  | array '=' expression SEMICOLON		{if(idExists($<stringValue>1) == 0){undeclaredError($<stringValue>1);YYERROR;}}
		  ;

expression: DIGITS							 {;}
		  | array							 {if(idExists($<stringValue>1) == 0){undeclaredError($<stringValue>1);YYERROR;}}
		  | CHARACTER 						 {;}
		  | VARNAME 						 {if(idExists($<stringValue>1) == 0){undeclaredError($<stringValue>1);YYERROR;}}
		  | expression operator expression	 {;}
		  | '(' expression ')' 				 {;}
		  | invocation						 {;}
		  ;

var_list: VARNAME					{addId($<stringValue>1);}
		| array						{addId($<stringValue>1);}
        | var_list ',' VARNAME		{addId($<stringValue>3);}
		| var_list ',' array		{addId($<stringValue>3);}
		;

print_var_list: VARNAME						{if(idExists($<stringValue>1) == 0){undeclaredError($<stringValue>1);YYERROR;}}
			| array							{if(idExists($<stringValue>1) == 0){undeclaredError($<stringValue>1);YYERROR;}}
			| var_list ',' VARNAME			{if(idExists($<stringValue>3) == 0){undeclaredError($<stringValue>3);YYERROR;}}
			| var_list ',' array			{if(idExists($<stringValue>3) == 0){undeclaredError($<stringValue>3);YYERROR;}}
			;
		  
operator: '+' 		{;}
		| '-' 		{;}
		| '*' 		{;}
		| '/' 		{;}
		| '^' 		{;}
		;

array: VARNAME '[' DIGITS ']'		{$<stringValue>$ = $<stringValue>1;}
	 | VARNAME '[' VARNAME ']'		{$<stringValue>$ = $<stringValue>1; if(idExists($<stringValue>3) == 0){undeclaredError($<stringValue>3);YYERROR;}}
	 ;

functions: function 			{;}
		 | function functions   {;}
		 ;

function: FUNCTION VARNAME '(' param_declaration ')' declarations block END_FUNCTION 		{if($<intValue>7 == 0){yyerror("function does not return!");YYERROR;}addFunc($<stringValue>2);}
		| FUNCTION VARNAME '(' param_declaration ')' declarations END_FUNCTION 				{yyerror("function does not return!");YYERROR;}
		| FUNCTION VARNAME '(' param_declaration ')' END_FUNCTION 							{yyerror("empty functions are not allowed!");YYERROR;}
		| FUNCTION VARNAME '(' param_declaration ')' block END_FUNCTION 					{if($<intValue>6 == 0){yyerror("function does not return!");YYERROR;}addFunc($<stringValue>2);}
		;

param_declaration: var_type VARNAME								{addId($<stringValue>2);}
				 | var_type array								{addId($<stringValue>2);}
				 | var_type array ',' param_declaration			{addId($<stringValue>2);}
				 | var_type VARNAME ',' param_declaration		{addId($<stringValue>2);}
				 ;

var_type: CHAR			{;}
		| INTEGER		{;}
		| VARNAME		{if(typeNameExists($<stringValue>1) == 0){undeclaredError($<stringValue>1);YYERROR;}}
		;

return: RETURN expression SEMICOLON 	{;}
      ;

break: BREAK SEMICOLON 		{;}
	 ;

bool_op: AND 		{;}
	   | OR			{;}
	   ;

condition: expression COMP expression			{;}
		 | condition bool_op condition			{;}
		 ;

while: WHILE '(' condition ')' block ENDWHILE	{;}
	 ;

if: IF '(' condition ')' THEN block ENDIF							{;}
  | IF '(' condition ')' THEN block ELSE block ENDIF				{;}
  | IF '(' condition ')' THEN block elseifs ENDIF					{;}
  | IF '(' condition ')' THEN block elseifs ELSE block ENDIF		{;}
  ;

elseifs: ELSEIF '(' condition ')' block						{;}
	   | ELSEIF '(' condition ')' block elseifs				{;}
	   ;

cases: CASE '(' expression ')' ':' block				{;}
	 | CASE '(' expression ')' ':' block cases			{;}
	 ;

switch: SWITCH '(' expression ')' cases ENDSWITCH
	  | SWITCH '(' expression ')' cases DEFAULT ':' block ENDSWITCH
	  ;

for: FOR VARNAME ':' '=' DIGITS TO DIGITS STEP DIGITS block ENDFOR
   | FOR VARNAME ':' '=' DIGITS TO DIGITS STEP DIGITS ENDFOR
   ;

%%

void yyerror(char *s) {
    fprintf(stderr, "at line %d: %s\n", yylineno, s);
}

void catFile(char* filename){
	FILE * fp = fopen(filename, "r");
    char next = fgetc(fp);
    while (next != EOF)
    {
        printf ("%c", next);
        next = fgetc(fp);
    }
    fclose(fp);
	printf("\n");
}

int main(int argc, char **argv){

	// print file contents
	catFile(argv[1]);

	// redirect input to file
	yyin = fopen(argv[1],"r");
	yyparse();

	return 0;
}

void addId(char * newId){
	int exists = 0;

	// find first empty id
	int i = 0;
	while(ids[i][0] != 0){
		i++;
		if(strcmp(ids[i], newId) == 0){
			exists = 1;
		}
	}

	// only add it if it doesnt already exist
	if(exists==0){
		// add id
		int j = 0;
		while(newId[j] != '\0'){
			ids[i][j] = newId[j];
			j++;
		}
	}
}

int idExists(char * id){
	int i = 0;
	while(ids[i][0] != 0){
		if(strcmp(ids[i], id) == 0){
			return 1;
		}
		i++;
	}

	return 0;
}

void addFunc(char * newFunc){
	int exists = 0;

	// find first empty id
	int i = 0;
	while(funcs[i][0] != 0){
		i++;
		if(strcmp(funcs[i], newFunc) == 0){
			exists = 1;
		}
	}

	// only add it if it doesnt already exist
	if(exists==0){
		// add id
		int j = 0;
		while(newFunc[j] != '\0'){
			funcs[i][j] = newFunc[j];
			j++;
		}
	}
}

int funcExists(char * func){
	int i = 0;
	while(funcs[i][0] != 0){
		if(strcmp(funcs[i], func) == 0){
			return 1;
		}
		i++;
	}

	return 0;
}

void addStruct(char * newStruct){
	int exists = 0;

	// find first empty id
	int i = 0;
	while(structs[i][0] != 0){
		i++;
		if(strcmp(structs[i], newStruct) == 0){
			exists = 1;
		}
	}

	// only add it if it doesnt already exist
	if(exists==0){
		// add id
		int j = 0;
		while(newStruct[j] != '\0'){
			structs[i][j] = newStruct[j];
			j++;
		}
	}
}

int structExists(char * struc){
	int i = 0;
	while(structs[i][0] != 0){
		if(strcmp(structs[i], struc) == 0){
			return 1;
		}
		i++;
	}

	return 0;
}

void addTypeName(char * newTypeName){
	int exists = 0;

	// find first empty id
	int i = 0;
	while(typeNames[i][0] != 0){
		i++;
		if(strcmp(typeNames[i], newTypeName) == 0){
			exists = 1;
		}
	}

	// only add it if it doesnt already exist
	if(exists==0){
		// add id
		int j = 0;
		while(newTypeName[j] != '\0'){
			typeNames[i][j] = newTypeName[j];
			j++;
		}
	}
}

int typeNameExists(char * typeName){
	int i = 0;
	while(typeNames[i][0] != 0){
		if(strcmp(typeNames[i], typeName) == 0){
			return 1;
		}
		i++;
	}

	return 0;
}

void undeclaredError(char * id){
	char message[270] = "undeclared identifier: ";
	yyerror(strcat(message, id));
}


%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myParser.tab.h"

int skipMultilineComment();
void substring(char* in, char* out, int start, int end);
%}
%option noyywrap
%option yylineno

%%
"PROGRAM "[a-zA-Z_][a-zA-Z0-9_]*\n     {return PROGRAM;}
"FUNCTION"				{return FUNCTION;}	
"VARS"					{return VARS;}
"CHAR"					{return CHAR;}
"INTEGER"				{return INTEGER;}
"END_FUNCTION"			{return END_FUNCTION;}
"RETURN"				{return RETURN;}
"STARTMAIN"				{return STARTMAIN;}
"ENDMAIN"				{return ENDMAIN;}
"IF"					{return IF;}
"THEN"					{return THEN;}
"ELSE"					{return ELSE;}
"ELSEIF"				{return ELSEIF;}
"ENDIF"					{return ENDIF;}
"WHILE"					{return WHILE;}
"ENDWHILE"				{return ENDWHILE;}
"FOR"					{return FOR;}
"TO"					{return TO;}
"STEP"					{return STEP;}
"ENDFOR"				{return ENDFOR;}
"BREAK"					{return BREAK;}
"PRINT"					{return PRINT;}
"SWITCH"				{return SWITCH;}
"CASE"					{return CASE;}
"DEFAULT" 				{return DEFAULT;}
"ENDSWITCH"				{return ENDSWITCH;}
"AND"					{return AND;}
"OR"					{return OR;}
"STRUCT "[a-zA-Z_][a-zA-Z0-9_]*\n	    {yylval.stringValue=strdup(yytext);return STRUCT;}
"ENDSTRUCT"			    {return ENDSTRUCT;}
"TYPEDEF"			    {return TYPEDEF;}
[0-9]+					{yylval.intValue= atoi(yytext); return DIGITS;}
"'"."'"      			{yylval.stringValue= strdup(yytext); return CHARACTER;}
"=="|"!="|">"|"<"       {return COMP;}
"/*"                    {if(!skipMultilineComment())return -1;}
[+*-/^,=():%]			{return yytext[0];}
";"						{return SEMICOLON;}
\"(\\.|[^\\"])*\"       {return STRING;}
"%".*\n                 ;
[ \t\n]					;
[a-zA-Z_][a-zA-Z0-9_]*	{yylval.stringValue=strdup(yytext);return VARNAME;}
"["                     {return yytext[0];}
"]"                     {return yytext[0];}

%%

int skipMultilineComment(){
    int nextc=input();

    while (nextc!=0){
        if ((char)nextc == '*'){
            nextc=input();
            if ((char)nextc=='/') return 1;
            if (nextc==0) continue;
        }
        nextc=input();
    }

    return 0;
}

void substring(char* out, char* in, int start, int end){
    int length = end - start;
    strncpy(out,in+start,length);
    out[length] = 0;
}

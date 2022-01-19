PROGRAM my_program
    STRUCT complexNumber
        VARS
        INTEGER real, imaginary;
    ENDSTRUCT

    STRUCT customString
        VARS
        INTEGER char[256];
    ENDSTRUCT

    STARTMAIN
        VARS 
        INTEGER num;

        num = 2;
        PRINT("num = ", num);
    ENDMAIN


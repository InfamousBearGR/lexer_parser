PROGRAM my_program
    TYPEDEF STRUCT complexNumber
        VARS
        INTEGER real, imaginary;
    complexNumber ENDSTRUCT

    TYPEDEF STRUCT customString
        VARS
        INTEGER char[256];
    customString ENDSTRUCT

    STARTMAIN
        VARS 
        complexNumber cmplx;
        customString my_str1;

        PRINT("complex num = ", cmplx);
        PRINT("custom string = ", my_str1);
    ENDMAIN


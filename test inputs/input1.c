PROGRAM my_program
    FUNCTION mean(INTEGER in1, INTEGER in2)
        VARS
        INTEGER output;
        output = (in1+in2)/2;
        RETURN output;
    END_FUNCTION

    FUNCTION printArray(CHAR a[4])
        VARS
        INTEGER i;

        FOR i :=1 TO 4 STEP 1
            PRINT("a = ", a[i]);
        ENDFOR

        RETURN 0;
    END_FUNCTION

    STARTMAIN
        VARS 
        INTEGER num1, num2, result;
        CHAR letters[4];

       num1 = 2;
       num2 = 6;
       letters[0] = 'a';
       letters[1] = 'b';
       letters[2] = 'c';
       letters[3] = 'd';

       result = mean(num1, num2);

       printArray(letters);
    ENDMAIN


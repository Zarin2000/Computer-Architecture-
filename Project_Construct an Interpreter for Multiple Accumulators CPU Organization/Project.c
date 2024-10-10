#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int acc,acc1,acc2,acc3,acc4;
char input[500];
char check_value[10][40];

void initially()
{
    acc1 = 0;
    acc2 = 0 ;
    acc3 = 0 ;
    acc4 = 0 ;
    acc = 0;
}

void check_valueFunction()
{
    int i, j;

    for(i=0; i<10; i++)
    {
        for(j = 0; j<40; j++)
        {
            check_value[i][j] = '\0';
        }
    }
}

void getValues()
{
    fgets(input, sizeof(input), stdin);  ///Read character from stream

    int len = strlen(input);

    input[len-1] = '\0';

    int i;

    int m = 0, n = 0;
    for(i=0; input[i]!='\0'; i++)
    {
        check_value[m][n] = '\0';

        if(input[i] == ' ')
        {
            m++;
            n = 0;
        }
        else
        {
            check_value[m][n++] = input[i];
            check_value[m][n] = '\0';
        }
    }
}

void Function1()                ///Accumulator 1
{
    int x;

    if(!strcmp(check_value[0], "ADD1"))     ///Compare two string character by character
    {
        x = atoi(check_value[1]);  ///Convert string into interger
        acc1 = acc1 + x;

        printf("\naccumulator1 = %d\n", acc1);
    }
    else if(!strcmp(check_value[0], "SUB1"))
    {
        x = atoi(check_value[1]);
        acc1 = acc1 - x;


        printf("\naccumulator1 = %d\n", acc1);
    }
    else if(!strcmp(check_value[0], "MUL1"))
    {
        x = atoi(check_value[1]);
        acc1 = acc1 * x;

        printf("\naccumulator1 = %d\n", acc1);
    }
    else if(!strcmp(check_value[0], "DIV1"))
    {
        x = atoi(check_value[1]);
        acc1 = acc1 / x;


        if(x == 0)
        {
            printf("Math error! Cannot divide by 0!\n");
        }
        else
        {
            printf("\naccumulator1 = %d\n", acc1);
        }
    }
    else if(!strcmp(check_value[0], "AND1"))
    {
        x = atoi(check_value[1]);
        acc1 = acc1 & x;


        printf("\naccumulator1 = %d\n", acc1);
    }
    else if(!strcmp(check_value[0], "NOT1"))
    {
        acc1 = ~acc1;
        printf("\naccumulator1 = %d\n", acc1);
    }
    else if(!strcmp(check_value[0], "OR1"))
    {
        x = atoi(check_value[1]);
        acc1 = acc1 | x;


        printf("\naccumulator1 = %d\n", acc1);
    }
    else if(!strcmp(check_value[0], "LD1"))
    {
        x = atoi(check_value[1]);
        acc1 = x;

        printf("\naccumulator1 = %d\n", acc1);
    }
    else if(!strcmp(check_value[0], "ST1"))
    {
        printf("\naccumulator1 = %d\n", acc1);
        printf("\nstored in memory location: %p", &acc1);
    }

    printf("\n");
}


void Function2()                ///Accumulator 2
{
    int x;

    if(!strcmp(check_value[0], "ADD2"))
    {
        x = atoi(check_value[1]);
        acc2 = acc2 + x;

        printf("\naccumulator2 = %d\n", acc2);
    }
    else if(!strcmp(check_value[0], "SUB2"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc2 = acc2 - x;
        //acc2 = acc1 - acc2;

        printf("\naccumulator2 = %d\n", acc2);
    }
    else if(!strcmp(check_value[0], "MUL2"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc2 = acc2 * x;
        //acc2 = acc1 * acc2;
        printf("\naccumulator2 = %d\n", acc2);
    }
    else if(!strcmp(check_value[0], "DIV2"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc2 = acc2 / x;
        //acc2 = acc1 / acc2;

        if(x == 0)
        {
            printf("Math error! Cannot divide by 0!\n");
        }
        else
        {
            printf("\naccumulator2 = %d\n", acc2);
        }
    }
    else if(!strcmp(check_value[0], "AND2"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc2 = acc2 & x;
        //acc2 = acc1 & acc2;

        printf("\naccumulator2 = %d\n", acc2);
    }
    else if(!strcmp(check_value[0], "NOT2"))
    {
        acc2 = ~acc2;
        printf("\naccumulator2 = %d\n", acc2);
    }
    else if(!strcmp(check_value[0], "OR2"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc2 = acc2 | x;
        //acc2 = acc1 | acc2;

        printf("\naccumulator2 = %d\n", acc2);
    }
    else if(!strcmp(check_value[0], "LD2"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc2 = x;

        printf("\naccumulator2 = %d\n", acc2);
    }
    else if(!strcmp(check_value[0], "ST2"))
    {
        printf("\naccumulator2 = %d\n", acc2);
        printf("\nstored in memory location: %p", &acc2);
    }

    printf("\n");
}

void Function3()                ///Accumulator 3
{
    int x;

    if(!strcmp(check_value[0], "ADD3"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc3 = acc3 + x;


        printf("\naccumulator3 = %d\n", acc3);
    }
    else if(!strcmp(check_value[0], "SUB3"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc3 = acc3 - x;


        printf("\naccumulator3 = %d\n", acc3);
    }
    else if(!strcmp(check_value[0], "MUL3"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc3 = acc3 * x;

        printf("\naccumulator3 = %d\n", acc3);
    }
    else if(!strcmp(check_value[0], "DIV3"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc3 = acc3 / x;


        if(x == 0)
        {
            printf("Math error! Cannot divide by 0!\n");
        }
        else
        {
            printf("\naccumulator3 = %d\n", acc3);
        }
    }
    else if(!strcmp(check_value[0], "AND3"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc3 = acc3 & x;


        printf("\naccumulator1 = %d\n", acc3);
    }
    else if(!strcmp(check_value[0], "NOT3"))
    {
        acc3 = ~acc3;
        printf("\naccumulator3 = %d\n", acc3);
    }
    else if(!strcmp(check_value[0], "OR3"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc3 = acc3 | x;


        printf("\naccumulator3 = %d\n", acc3);
    }
    else if(!strcmp(check_value[0], "LD3"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc3 = x;

        printf("\naccumulator3 = %d\n", acc3);
    }
    else if(!strcmp(check_value[0], "ST3"))
    {
        printf("\naccumulator3 = %d\n", acc3);
        printf("\nstored in memory location: %p", &acc3);
    }

    printf("\n");
}

void Function4()                    ///Accumulator 4
{
    int x;

    if(!strcmp(check_value[0], "ADD4"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc4 = acc4 + x;


        printf("\naccumulator4 = %d\n", acc4);
    }
    else if(!strcmp(check_value[0], "SUB4"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc4 = acc4 - x;


        printf("\naccumulator4 = %d\n", acc4);
    }
    else if(!strcmp(check_value[0], "MUL4"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc4 = acc4 * x;

        printf("\naccumulator4 = %d\n", acc4);
    }
    else if(!strcmp(check_value[0], "DIV4"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc4 = acc4 / x;


        if(x == 0)
        {
            printf("Math error! Cannot divide by 0!\n");
        }
        else
        {
            printf("\naccumulator4 = %d\n", acc4);
        }
    }
    else if(!strcmp(check_value[0], "AND4"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc4 = acc4 & x;


        printf("\naccumulator4 = %d\n", acc4);
    }
    else if(!strcmp(check_value[0], "NOT4"))
    {
        acc4 = ~acc4;
        printf("\naccumulator1 = %d\n", acc4);
    }
    else if(!strcmp(check_value[0], "OR4"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc4 = acc4 | x;


        printf("\naccumulator4 = %d\n", acc4);
    }
    else if(!strcmp(check_value[0], "LD4"))
    {
        x = atoi(check_value[1]);       ///Convert String to Intiger
        acc4 = x;

        printf("\naccumulator4 = %d\n", acc4);
    }
    else if(!strcmp(check_value[0], "ST4"))
    {
        printf("\naccumulator4 = %d\n", acc4);
        printf("\nstored in memory location: %p", &acc4);
    }

    printf("\n");
}


void parseCommand(int acc1,int acc2, int acc3, int acc4)
{
    int x;

    if(!strcmp(check_value[0], "ADD"))
    {
       acc = acc1 + acc2 + acc3 + acc4;

        printf("\nACCUMULATOR = %d\n", acc);
    }
    else if(!strcmp(check_value[0], "SUB"))
    {
        acc = acc1 - acc2 - acc3 - acc4;

        printf("\nACCUMULATOR = %d\n", acc);
    }
    else if(!strcmp(check_value[0], "MUL"))
    {
        acc = acc1 * acc2 * acc3 * acc4;
        printf("\nACCUMULATOR = %d\n", acc);
    }
    else if(!strcmp(check_value[0], "DIV"))
    {
        int a=0,b=0;
        a = acc1 / acc2;
        b = a / acc3;
        acc = b/acc4;

        printf("\nACCUMULATOR = %d\n", acc);
    }
    else if(!strcmp(check_value[0], "AND"))
    {
       acc = acc1 & acc2 & acc3 & acc4;

        printf("\nACCUMULATOR = %d\n", acc);
    }
    else if(!strcmp(check_value[0], "NOT"))
    {
        acc = ~acc;
        printf("\nACCUMULATOR = %d\n", acc);
    }
    else if(!strcmp(check_value[0], "OR"))
    {
       acc = acc1 | acc2 | acc3 | acc4;

        printf("\nACCUMULATOR = %d\n", acc);
    }
    else if(!strcmp(check_value[0], "LD"))
    {
        x = atoi(check_value[1]); ///Convert String to Intiger
        acc = x;

        printf("\nACCUMULATOR = %d\n", acc);
    }
    else if(!strcmp(check_value[0], "ST"))
    {
        printf("\nACCUMULATOR = %d\n", acc);
        printf("\nstored in memory location: %p", &acc);
    }

    //printf("\n");
}

int main()
{
    initially();

    printf("                                            Welcome To Our Project\n");
    printf("                                           ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("For Accumulator-1...\n");
    printf("Addition -> ADD1, Subtraction -> SUB1, Division -> DIV1,\nMULTIPLICATION -> MUL1, AND Operation -> AND1, NOT Operation -> NOT1, \nOR Operation -> OR1, Load -> LD1, Store -> ST1\n\n");


    printf("Also for Accumulator 2, Accumulator 3 and Accumulator 4\n\n");

    printf("Format:- operation_code , operand\n\n");

    while(1)
    {
        check_valueFunction();
        getValues();
        Function1();
        Function2();
        Function3();
        Function4();
        parseCommand(acc1,acc2,acc3,acc4);
    }
    return 0;
}

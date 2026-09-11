#include<stdio.h>
#include<conio.h>

int main()
{
    char oper = '\0';
    int No1 = 0, No2 = 0, Res = 0;

    printf("\n Enter an operator(+,-,*,/):");
    oper = getche();

    if (oper != '+' &&oper != '-' && oper != '*' && oper != '/')

    {
        printf("\n Invalid Input ");
        return -1;

    }

    printf(" \n Enter First Number : ");
    scanf("%d",&No1);

    printf(" \n Enter Second Number : ");
    scanf("%d",&No2);

    switch(oper)
    {
        case'+':

            Res = No1 + No2;
            printf("\n Addition of %d & %d is = %d ",No1,No2,Res);
            break;

        case'-':

            Res = No1 - No2;
            printf("\n Subtraction of %d & %d is = %d ",No1,No2,Res);
            break;

        case'*':

            Res = No1 * No2;
            printf("\n Multiplication  of %d & %d is = %d ",No1,No2,Res);
            break;

        case'/':

            Res = No1 / No2;
            printf("\n Division of %d & %d is = %d ",No1,No2,Res);
            break;

    }
            printf("\n Thank You !!! ");

    getch();
    return 0;
}

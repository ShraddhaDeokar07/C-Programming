#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("\n Enter a Number: ");
    scanf("%d",&No);

    Res = No ^ ( 1 << 6);

    {
        printf("\n %d Number After 7th bit Toggle is = %d",No,Res);
    }
    getch();
    return 0;
}

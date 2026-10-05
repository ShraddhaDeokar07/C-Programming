#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    if(((No >> 6) & 1) == 1)
    {
        printf("\n 7th bit given number is %d ON.",No);

        Res = No ^ (1 << 6);

        printf("\n Result of 7th bit %d is OFF.",Res);
    }
    else
    {
        printf("\n 7th Bit of Given Number %d is OFF.", No);
        printf("\n Since No update in Given Number.");
    }
    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res1 = 0, Res2 = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);    /// 5976

    if((( No >> 6 ) & 1) == 1)
    {
        printf("\n 7th bit of Given Number %d is ON.", No);

        Res1 =  No ^ (1 << 6) ;          /// Res1 = 5912 - 7th Bit OFF
    }

    if((( No >> 9 ) & 1) == 1)
    {
        printf("\n 10th bit of Given Number %d is ON.", No);

        Res2 =  Res1 ^ (1 << 9) ;       /// Res2 = 5400 - 7th & 10th Both OFF
    }

    printf("\n Result = %d", Res2);

    getch();
    return 0;
}

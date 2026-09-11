#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0 , sum = 0;

    while(1)
    {
        printf("\n Enter a number : ");
        scanf("%d",&No);

    if (No <= 0)
    {
        break;
    }
    if (No > 0)
    {
        sum = sum + No;
        continue;
    }

    }
    {
        printf("\n sum = %d",sum);
    }

    getch();
    return 0;

}





#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , No = 0 , Min;

    printf("\n Enter 7 Number : ");
    scanf("%d",&Min);

    for( i = 2; i <= 7; i++)
    {
        scanf("%d",&No);
    }
    if( No < Min)
    {
        Min = No;
    }
    printf("\n The Minimun Number is : %d ",Min);
    {
        printf("\n\n Thank you ! ");
    }

    getch();
    return 0;

}

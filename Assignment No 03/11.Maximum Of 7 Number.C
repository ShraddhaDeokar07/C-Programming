#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , No = 0 , Max;

    printf("\n Enter 7 Number : ");
    scanf("%d",&Max);

    for( i = 2; i <=7; i++)
    {
        scanf("%d",&No);

       if(No > Max )
    {
       Max = No;
    }
    }
    printf("\n The Maximum Number is : %d ",Max);
    {
        printf("\n \n Thank You ! ");
    }

    getch();
    return 0;
}

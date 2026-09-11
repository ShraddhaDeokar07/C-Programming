#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,MaxNo = 0;

        printf(" Enter Number 1 : ");
        scanf("%d",&No1);

        printf("Enetr Number 2 : ");
        scanf("%d",&No2);

        if( No1 > No2)
        {
            MaxNo = No1;
            printf("\n %d is Maximum Number",No1);
        }
        else
        {
            printf("\n %d is Maximum Number",No2);
        }

        printf("\n Thanks!!!");

        getch();
        return 0;

}

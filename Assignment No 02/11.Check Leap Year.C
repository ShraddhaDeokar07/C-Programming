#include<stdio.h>
#include<conio.h>

int main()
{
    int year;

    printf("\n Enter year: ");
    scanf("%d",&year);

    if( year % 4 == 0)
    {
        printf("The year %d is leap year.",year);
    }
    else
    {
        printf("The year %d is not leap year.",year);
    }
    getch();
    return 0;
}

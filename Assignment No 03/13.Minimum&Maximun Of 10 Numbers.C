#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , No = 0 , Min , Max;

    printf("\n Enter 10 Numbers : ");
    scanf("%d",&No);

    Min = No;
    Max = No;

    for( i = 2; i <= 10; i++)
        {
            scanf("%d",&No);
        }
    if(No < Min)
        {
            Min = No;
        }
    if(No > Max)
        {
            Max = No;
        }

        printf("\n The Minimun Number is : %d",Min);
        printf("\n\n The Maximun Number is : %d",Max);
        {
            printf("\n \n Thank You !");
        }

    getch();
    return 0;

}

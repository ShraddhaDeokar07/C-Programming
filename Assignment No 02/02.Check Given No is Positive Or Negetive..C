#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&num);
    {
        if(num > 0)
        {
            printf(" %d is Positive Number",num);
        }
        else if(num < 0)
        {
            printf(" %d is Negetive Number",num);
        }
        else
        {
            printf(" Invalid Input");
        }
        getch();
        return 0;
    }
}

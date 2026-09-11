#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 0, y = 0, i = 0, result = 1;

    printf("\n Enter x :");
    scanf("%d",&x);

    printf("\n Enter y :");
    scanf("%d",&y);

    for(i = 1; i <= y; i++)
    {
        result = result * x;
    }

    printf("\n %d^%d = %d", x, y, result);

    getch();
    return 0;
}


#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i;

    printf("\n Enter Number = ");
    scanf("%d",&n);

    for(i =1; i <= n; i++)
    {
        printf("*");
    }
    getch();
    return 0;
}

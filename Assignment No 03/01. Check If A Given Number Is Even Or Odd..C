#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Enter the number = ");
    scanf("%d",&num);
{
    if (num % 2 == 0)
        printf("%d is Even number ",num);

    else
        printf("%d is Odd number ",num);
}
    getch();
    return 0;
}

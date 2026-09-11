#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;

    printf("\n Enter the number = ");
    scanf("%d",&num);
{
    (num % 2 == 0)? printf("%d is Even number ",num):printf("%d is Odd number ",num);
}
    getch();
    return 0;
}

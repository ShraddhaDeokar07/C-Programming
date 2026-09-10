#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\n Addition of %d and %d = %d",num1,num2,sum);
    getch();
    return 0;
}


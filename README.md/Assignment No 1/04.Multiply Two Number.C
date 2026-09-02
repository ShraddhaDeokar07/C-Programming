#include<stdio.h>
#include<conio.h>

    int main()
{
     int  num1, num2, sum;

    printf("Enter First Number:");
    scanf("%d" ,&num1);

    printf("Enter Second Number:");
    scanf("%d" ,&num2);

    sum = num1 * num2;

    printf("\n Multiply of %d * %d = %d " , num1 , num2 , sum);

    getch();
    return 0;
}

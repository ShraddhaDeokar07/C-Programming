#include<stdio.h>
#include<conio.h>

int main()
{
    float side = 0.0 , area =0.0;

    printf("\n Enter area of side = ");
    scanf("%f",&side);

     area = side * side;

    printf("\n area of square is = %.2f",area);

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    float km = 0.0 ,m = 0.0;


    printf("\n Enter a distance in km =");
    scanf("%f",&km);

    m = km * 1000;

    printf("\n distance in meter is = %.2f",m);

    getch();
    return 0;
}

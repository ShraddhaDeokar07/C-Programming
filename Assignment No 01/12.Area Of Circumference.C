#include<stdio.h>
#include<conio.h>

int main()
{
    float PI = 3.14 , radius = 0.0 , area = 0.0;

    printf("\n Enter a radius of circle is:");
    scanf("%f",&radius);

    area = 2 * PI * radius;

    printf("\n area of circumference = %2f",area);


    printf("\n\n Thank You!");

    getch();
    return 0;

}

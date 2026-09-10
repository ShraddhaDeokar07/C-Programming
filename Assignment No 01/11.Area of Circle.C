#include<stdio.h>
#include<conio.h>

int main()
{
    float  PI = 3.14, radius = 0.0, area = 0.0;


    printf("\n Enter radius of circle is:");
    scanf("%f",&radius);

    area = PI * radius * radius;

    printf("\n Area of circle is = %2f",area);

    getch();
    return 0;
}

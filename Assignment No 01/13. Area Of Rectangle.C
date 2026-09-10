#include<stdio.h>
#include<conio.h>

int main()
{
    float   width = 0.0 , height =0.0 , area;

    printf("\n Enter the widht = ");
    scanf("%f",&width);

    printf("\n Enter the height =");
    scanf("%f",&height);

    area = width * height;

    printf("\n area of rectangle is = %2f" ,area);

    printf("\n\n Thank You!");

    getch();
    return 0;

}

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0 , Cube;

    printf("\n Enter The Number = ");
    scanf("%d",&Num);

    Cube = Num * Num * Num;

    printf("\n Number of cube is = %d",Cube);

    printf("\n\n Thank You");

    getch();
    return 0;
}

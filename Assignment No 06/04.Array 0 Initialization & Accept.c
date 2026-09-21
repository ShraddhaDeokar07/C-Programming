#include<stdio.h>
#include<conio.h>

int main()
{
    int value[7] = {};

    printf("\nFirst Element = %d",value[0]);
    printf("\nSecond Element = %d",value[1]);
    printf("\nThird Element = %d",value[2]);
    printf("\nFourth Element = %d",value[3]);
    printf("\nFifth Element = %d",value[4]);
    printf("\nSixth Element = %d",value[5]);
    printf("\nSeventh Element = %d",value[6]);

    getch();

    printf("\n\nEnter First Element : ");
    scanf("%d",&value[0]);

    printf("\nEnter Second Element : ");
    scanf("%d",&value[1]);

    printf("\nEnter Third Element : ");
    scanf("%d",&value[2]);

    printf("\nEnter Fourth Element : ");
    scanf("%d",&value[3]);

    printf("\nEnter Fifth Element : ");
    scanf("%d",&value[4]);

    printf("\nEnter Sixth Element : ");
    scanf("%d",&value[5]);

    printf("\nEnter Seventh Element : ");
    scanf("%d",&value[6]);

    getch();
    return 0;
}

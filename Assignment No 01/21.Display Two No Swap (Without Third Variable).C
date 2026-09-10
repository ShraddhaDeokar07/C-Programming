#include<stdio.h>
#include<conio.h>

int main()
{
    int A , B;

    printf("\n Enter Value A = ");
    scanf("%d",&A);

    printf("\n Enter Value B = ");
    scanf("%d",&B);

    A = A + B;
    B = A - B;
    A = A - B;

    printf("\n After Swaping Value is A = %d, B = %d",A,B);

    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    int A , B , C;

    printf("\n Enter Value A = ");
    scanf("%d",&A);

    printf("\n Enter Value B = ");
    scanf("%d",&B);

    printf("\n enter Value C = ");
    scanf("%d",&C);

    A = A + B + C;
    B = A - (B + C);
    C = A - (B + C);
    A = A - (B + C);

    printf("\n After Swaping Value is A = %d , B = %d , C = %d",A,B,C);

    getch();
    return 0;
}

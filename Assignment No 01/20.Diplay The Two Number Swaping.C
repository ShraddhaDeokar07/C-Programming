#include<stdio.h>
#include<conio.h>

int main()
{
    int A , B , Temp;

    printf("\n Enter Value Of A = ");
    scanf("%d",&A);

    printf("\n Enter Value Of B = ");
    scanf("%d",&B);

    A = Temp;
    A = B;
    B = Temp;

    printf("\n After Swaping Value is A = %d, B = %d",A,B);

    getch();
    return 0;
}

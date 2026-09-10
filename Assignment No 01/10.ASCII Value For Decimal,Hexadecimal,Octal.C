#include<stdio.h>
#include<conio.h>>

int main()
{
    char ch;

    printf("\n Enter The Character = ");
    scanf("%c",&ch);

    printf("\n ASCII value is %c",ch);
    printf("\n Decimal : %d",ch);
    printf("\n Hexadecimal : %x",ch);
    printf("\n Octal : %o",ch);

    getch();
    return 0;
}

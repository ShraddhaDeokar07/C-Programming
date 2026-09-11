#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\n Enter a character = ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("\n The %c is True",ch);
    }
    else
    {
        printf("\n The %c is False",ch);
    }
    getch();
    return 0;
}

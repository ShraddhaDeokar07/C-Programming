#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\n Enter a character = ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\n The %c is Upper Case",ch);
    }
    else if ( ch >= 'a' && ch <= 'z')
    {
        printf("\n The %c is Lower Case",ch);
    }
    else if ( ch >= '0' && ch <= '9')
    {
        printf("\n The %c is Digit",ch);
    }
    else
    {
        printf("\n The %c is Specail symbol",ch);
    }
    {
        printf("\n \n Thank You ! ");
    }
    getch();
    return 0;
}


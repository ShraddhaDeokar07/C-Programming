#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter Character = ");
    scanf("%c",&ch);

    if( ch >= 'a' && ch <= 'z')

        ch = ch -32;

    else if (ch >= 'A' && ch <= 'Z')

        ch = ch + 32;

        printf("\n Output : %c",ch);

    getch();
    return 0;
}


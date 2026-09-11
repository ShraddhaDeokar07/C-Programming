#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\n Enter a Character : ");
    scanf("%c",&ch);

    if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u')
    {
        printf("\n The Character %c is Vowel",ch);
    }
    else
    {
        printf("\n The Character %c is not Vowel",ch);
    }
    getch();
    return 0;
}

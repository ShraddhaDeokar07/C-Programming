#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\n Enter a Charater : ");
    scanf("%c",&ch);

    if (ch == 'a'|| ch == 'i'|| ch == 'e'|| ch == 'o'|| ch == 'u')
    {
        printf("\n The Character %c is Vowel",ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n The Character %c is Constant",ch);
    }
    else
    {
       printf("\n The Character %c is Digit",ch);
    }
    getch();
    return 0;

}

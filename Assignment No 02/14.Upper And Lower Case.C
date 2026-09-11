#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("\n Enter a character : ");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
       {
        printf("\n The %c is Upper Case",ch);
       }
    else if( ch >= 'A'&& ch <= 'Z')
    {
        printf("\n The %c is Lower Case",ch);
    }
    else
    {
        printf("\n The %c is not a Letter",ch);
    }
    getch();
    return 0;
}

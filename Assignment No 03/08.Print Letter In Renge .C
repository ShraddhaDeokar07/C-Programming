#include<stdio.h>
#include<conio.h>

int main()
{
    char start = 0 , end = 0 , ch;

    printf("\n Enter start letter = ");
    scanf(" %c",&start);

    printf("\n Enter end letter = ");
    scanf(" %c",&end);

    if( start <= end)
    {
        for(ch = start; ch <= end; ch++)
        {
           printf(" %c",ch);
        }

    }
    else
    {
       for(ch = start; ch >= end; ch--)
       {
           printf(" %c",ch);
       }

    }
    getch();
    return 0;

}

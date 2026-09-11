#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , irow = 4 , jcol = 5;
    char ch = 'A';

    for(i = 1; i <=irow; i++)
    {
        ch = 'A';

        for(j = 1; j <=jcol; j++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf(" \n ");
    }
    getch();
    return 0;
}

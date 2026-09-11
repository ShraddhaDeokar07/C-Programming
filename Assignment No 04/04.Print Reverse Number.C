#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , irow = 0 , jcol = 0;

    printf("\n Enter row number : ");
    scanf("%d",&irow);

    printf("\n Enter col number : ");
    scanf("%d",&jcol);

    for(i = irow; i >= 1; i--)
    {
        for(j = jcol; j >=1; j--)
        {
            printf(" %d ",j);
        }
        {
            printf(" \n ");
        }
    }
    getch();
    return 0;
}

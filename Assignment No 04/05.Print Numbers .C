#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , irow = 0 , jcol = 0;

    printf("\n Enter row number : ");
    scanf("%d",&irow);

    printf("\n Enter col number : ");
    scanf("%d",&jcol);

    for( i = 1; i <= irow; i++)
    {
        for(j = 1; j <= jcol; j++)
        {
            printf(" %d ",i);
        }
        {
            printf("\n");
        }
    }
        getch();
        return 0;

}

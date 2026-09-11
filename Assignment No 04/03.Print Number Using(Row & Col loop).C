#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , irow = 4 , jcol = 4;

    printf("\n Enter row No : ");
    scanf("%d",&irow);

    printf("\n Enter col No : ");
    scanf("%d",&jcol);

    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= jcol; j++)

        {
           printf(" %d ",j);
        }
        {
            printf("\n");
        }
    }
    getch();
    return 0;
}

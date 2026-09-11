#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , rc = 0;
    char ch = 'A';

    printf("\n Enter The r & c :");
    scanf("%d",&rc);

    for(i = 1; i <= rc; i++)
    {
        ch = 'A'+(i - 1)*5;

        for(j = 1; j <= i; j++)
        {
                printf(" %c ",ch);
                ch++;

        }
        printf("\n");
    }
    getch();
    return 0;
}

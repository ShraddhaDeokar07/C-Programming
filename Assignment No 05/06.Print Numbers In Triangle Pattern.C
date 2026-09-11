#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , j = 0 , rc = 0 , No = 1;

    printf("\n Enter The r & c :");
    scanf("%d",&rc);

    for(i = 1; i <= rc; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" %d",No);
            No++;

        }
        printf("\n");
    }
    getch();
    return 0;
}

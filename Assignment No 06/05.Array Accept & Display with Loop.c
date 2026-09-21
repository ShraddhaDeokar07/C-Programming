#include<stdio.h>
#include<conio.h>

int main()
{
    int i, arr[10] = {};

    printf("\nEnter 10 elements:");

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter element %d :", i + 1);
        scanf("%d",&arr[i]);
    }

    printf("\nArray Elements are: ");

    for(i = 0; i < 10; i++)
    {
        printf("\nElement %d = %d", i + 1, arr[i]);
    }

    getch();
    return 0;
}

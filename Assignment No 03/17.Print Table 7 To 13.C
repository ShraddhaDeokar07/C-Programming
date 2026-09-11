#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, i = 0;

    for(num = 7; num <= 13; num++)
    {
        printf("\nTable of %d\n", num);

        for(i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", num, i, num * i);
        }
    }

    getch();
    return 0;
}

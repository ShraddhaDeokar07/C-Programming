#include <stdio.h>
#include<conio.h>

int main()
{
    int num;
    {
        printf("\n Enter a number = ");
        scanf("%d",&num);

        if( num < 10)
        {
            printf("Hello");
        }
        else{
            printf("World");

        getch();
        return 0;
        }
    }
}

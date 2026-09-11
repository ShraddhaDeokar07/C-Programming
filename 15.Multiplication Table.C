#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0 , i = 0;

    printf("\n Enter a number : ");
    scanf("%d",&num);

        for(i = 1; i <= 10; i++)
        {
           printf("\n %d * %d = %d\n",num,i, num * i);
        }

        getch();
        return 0;
}

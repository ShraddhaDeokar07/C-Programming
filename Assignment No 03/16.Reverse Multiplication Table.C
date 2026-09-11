#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, i = 0;

    printf("\n Enter a number : ");
    scanf("%d",&num);

    for(i = 10; i >= 1; i--)
    {
        printf("\n%d * %d = %d ",num,i,num * i);
    }
    getch();
    return 0;
}




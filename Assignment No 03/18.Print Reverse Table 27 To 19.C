#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0, i = 0;

    for(num = 27; num >=19; num--)
    {
        printf("\n Table of %d\n",num);

        for(i = 10; i >=1; i--)
        {
        printf("\n %d * %d = %d\n",num,i,num *i);
        }
    }
    getch();
    return 0;
}

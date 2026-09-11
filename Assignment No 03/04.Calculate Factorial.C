#include<stdio.h>
#include<conio.h>

int main()
{
    int n = 0, i = 0, fact = 1;

    printf("\n Enter Number = ");
    scanf("%d",&n);

    for(i = 1; i<= n; i++)
    {
        fact = fact * i;
    }
        printf("The Factorial Of %d is: %d",n,fact);
      getch();
      return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    int a , b , c;

    printf("\n Enter the three numbers = ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        printf("\n The Greater Number is = %d",a);

    else if(b>=c && b>=c)
        printf("\n The Greater Number is = %d",b);

    else
        printf("\n The Greater Number is = %d",c);

    getch();
    return 0;


}

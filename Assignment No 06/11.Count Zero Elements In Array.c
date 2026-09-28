#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Num[10] = {}, Count = 0;

    printf("\n Enter the 10 Element: ");

    for(i = 0; i < 10; i++)

    {
        printf("\n  Enter Element %d ",i+1);
        scanf("%d",&Num[i]);
    }
    {
        printf("\n The Array Element Are: \n \n");

    for(i = 0; i < 10; i++)

        printf("%d",Num[i]);

        if(Num[i] == 0)
        {
            Count++;
        }
        printf("\n \n Count of Null Element = %d",Count);
    }
    getch();
    return 0;

}

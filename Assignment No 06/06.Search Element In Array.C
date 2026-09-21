#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Num[10],Search,flag = 0;

    printf("Enter 10 Elements : \n ");

    for(i =0; i <10; i++)
    {
        scanf("%d",&Num[i]);
    }
    printf("Array Element Are:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d",Num[i]);
    }
    printf("\n Enter Element To Search: ");
    scanf("%d",&Search);

    for(i = 0; i < 10; i++)
    {
        if(Num[i] == Search)
        {
            printf("Element Found At Index = %d",i);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Element Not Found");
    }

    getch();
    return 0;
}

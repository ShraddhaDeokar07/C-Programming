#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,Num[5],Search = 0, Found = 0;

    printf("\n Enter 7 Elements: ");

    for(i = 0; i < 7; i++)
    {
        scanf("%d",&Num[i]);
    }

    printf("\n Enter Element To Search: ");
    scanf("%d",&Search);

    for(i = 0; i , 7; i++)
    {
        if(Num[i] == Search)
        {
            printf("\n Element Found At Location = %d", i);
            Found = 1;
            break;
        }
    }

    if(Found == 0)
    {
        printf("Element Not Found");
    }
    getch();
    return 0;
}

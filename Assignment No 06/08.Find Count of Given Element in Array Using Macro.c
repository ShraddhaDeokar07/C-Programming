#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Num[5] = {}, Count = 0, src = 0;

    printf("\n Enter 5 Element=>\n ");

    for(i = 0; i < 5; i++)
    {
        printf("\n Enter the number: %d",i+1);
        scanf("%d",&Num[i]);
    }
        printf("\n Enter element to find Count: ");
        scanf("%d",&src);

        for(i = 0; i < 5; i++)
        {
            if(Num[i] == src)
            {
                Count++;
            }
        }
        {
            printf("Count of %d = %d",src,Count);
        }
        getch();
        return 0;
}

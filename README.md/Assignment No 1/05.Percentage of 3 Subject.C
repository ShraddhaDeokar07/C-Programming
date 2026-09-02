#include<stdio.h>
#include<conio.h>

int main()
{
    int sub1, sub2, sub3,  sum;
    float percentage;

    printf("Mark in Subject 1:");
    scanf("%d",&sub1);

    printf("Mark in Subject 2:");
    scanf("%d",&sub2);

    printf("Mark in Subject 3:");
    scanf("%d",&sub3);

    sum = sub1 + sub2 + sub3;
    percentage = (float)sum / 3;


    printf("\n Toatal Marks = %d",sum);
    printf("\n percentage = %0.2f",percentage);

    getch();
    return 0;
}

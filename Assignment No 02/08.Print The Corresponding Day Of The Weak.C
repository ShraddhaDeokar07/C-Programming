#include<stdio.h>
#include<conio.h>

int main(){
    int day;

    printf("\n Enter a number ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
            printf("day of the week is sunday");
        break;

        case 2:
            printf("day of the week is monday");
        break;

        case 3:
            printf("day of the week is tuesday");
        break;

        case 4:
            printf("day of the week is wednesday");
        break;

        case 5:
            printf("day of the week is thursday");
        break;

        case 6:
            printf("day of the week is friday");
        break;

        case 7:
            printf("day of the week is saturday");
        break;

    default:
        printf("Invalid Number!");
    }

    getch();
    return 0;

}

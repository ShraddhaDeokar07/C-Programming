#include<stdio.h>
#include<conio.h>

struct stud
{
    int RNO;
    char Name[20];
    float per;
};
int main()
{
    struct stud std1;

    printf("\n Roll Number = %d",std1.RNO);
    printf("\n Name  = %s",std1.Name);
    printf("\n Percentage  = %0.2f",std1.per);

    getch();
    return 0;
}

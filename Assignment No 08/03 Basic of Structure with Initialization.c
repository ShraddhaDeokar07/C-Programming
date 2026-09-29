#include<stdio.h>
#include<conio.h>

struct stud
{
    int RNO;
    char Name[20];
    float per;
    char Grade;
};
int main()
{
    struct stud std1 = {55,"Shraddha",98.60,'A'};

    printf("\n Roll Number = %d",std1.RNO);
    printf("\n Name  = %s",std1.Name);
    printf("\n Percentage  = %0.2f",std1.per);
    printf("\n Grade  = %c",std1.Grade);

    getch();
    return 0;
}

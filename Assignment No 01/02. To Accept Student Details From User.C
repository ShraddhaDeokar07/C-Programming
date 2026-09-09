#include<stdio.h>
#include<conio.h>

int main()
{
    int RollNo = 0;
    char Name [20] , City [20] , Course [20];

    printf("\n Enter The Roll No = ");
    scanf("%d",&RollNo);

    printf("\n Enter The Name = ");
    scanf("%s",&Name);

    printf("\n Enter The City = ");
    scanf("%s",&City);

    printf("\n Enter The  Course = ");
    scanf("%s",&Course);

    printf("\n student rollno = %d",RollNo);
    printf("\n student name = %s",Name);
    printf("\n student city = %s",City);
    printf("\n student Course = %s",Course);

    getch();
    return 0;

}

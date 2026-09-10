#include <stdio.h>
#include <math.h>

int main()
{
    int No;
    double SquareRoot;

    printf("Enter the Number: ");
    scanf("%d", &No);

    SquareRoot = sqrt(No);

    printf("The square root of %d is: %.0lf", No, SquareRoot);

    return 0;
}

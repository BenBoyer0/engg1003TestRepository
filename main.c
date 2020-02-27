#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); //%d chaged to %f the f refers to float datatype
    y = (x+2)/(x-1);
    printf("y: %f\n", y);
    return 0;
}

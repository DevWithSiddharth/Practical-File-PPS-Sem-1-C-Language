#include <stdio.h>

int main() {
    float a, b, c,d;

    printf("Enter the Principal amount: ");
    scanf("%f", &a);

    printf("Enter the Rate of interest per annum: "); 
    scanf("%f", &b);

    printf("Enter the Time period (in years): "); 
    scanf("%f", &c);

    c = ((a * b * c)/100)+a;

    printf("The simple interest is %f\n", c); 

    return 0;
}   
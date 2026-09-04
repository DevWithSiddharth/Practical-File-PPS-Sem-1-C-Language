#include <stdio.h>

int main() {
    float a, b, c, d;

    printf("Enter the Principal amount: ");
    scanf("%f", &a);

    printf("Enter the Rate of interest per annum: ");
    scanf("%f", &b);

    printf("Enter the Time period (in years): ");
    scanf("%f", &c);

    d = (a * b * c) / 100;

    printf("The simple interest is %.2f\n", d);

    return 0;
}
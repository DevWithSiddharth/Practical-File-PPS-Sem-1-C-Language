#include <stdio.h>

int main() {
    float a, b, c, avg;

    printf("Enter the First Number: ");
    scanf("%f", &a);

    printf("Enter the Second Number: ");
    scanf("%f", &b);

    printf("Enter the Third Number: ");
    scanf("%f", &c);

    avg = (a + b + c) / 3;

    printf("The average of %f, %f and %f is %f\n", a, b, c, avg);

    return 0;
}
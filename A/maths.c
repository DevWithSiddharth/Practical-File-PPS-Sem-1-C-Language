#include <stdio.h>

int main() {
    float a, b, c, d, e, f;

    printf("Enter the First Number: ");
    scanf("%f", &a);

    printf("Enter the Second Number: "); 
    scanf("%f", &b);

    c = (a + b );
    d = (a - b );
    e = (a * b );
    f = (a / b );

    printf("The Sum of %f and %f is %f\n", a, b, c); 
    printf("The Difference of %f and %f is %f\n", a, b, d); 
    printf("The Multiplication of %f and %f is %f\n", a, b, e); 
    printf("The Division of %f and %f is %f\n", a, b, f);

    return 0;
}   
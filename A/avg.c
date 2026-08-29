#include <stdio.h>

int main() {
    float a, b, c,d;

    printf("Enter the First Number: ");
    scanf("%f", &a);

    printf("Enter the Second Number: "); 
    scanf("%f", &b);

    printf("Enter the third Number: "); 
    scanf("%f", &c);

    c = (a + b + c)/3;

    printf("The avg of %f and %f is %f\n", a, b, c); 

    return 0;
}   
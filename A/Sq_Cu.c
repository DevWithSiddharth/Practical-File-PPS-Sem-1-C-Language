#include <stdio.h>
#include <math.h>

int main() {
    float a, c, d;

    printf("Enter the Number: ");
    scanf("%f", &a);

    c = pow(a, 2);
    d = pow(a, 3);

    printf("The Square is %.2f\n", c);
    printf("The Cube is %.2f\n", d);

    return 0;
}
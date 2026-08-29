#include <stdio.h>

int main() {
    float a, c, d;
    
    printf("Enter the First Number: ");
    scanf("%f", &a);

    c = (a*a );
    d = (a*a*a );

    printf("The Square is %f\n", c); 
    printf("The cube is %f\n", d); 

    return 0;
}   
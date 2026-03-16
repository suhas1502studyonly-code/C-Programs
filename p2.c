#include <stdio.h>

int main()
{
    float a, b;
    float sum, difference, product, division;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    division = a / b;

    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Division = %.2f\n", division);

    return 0;
}

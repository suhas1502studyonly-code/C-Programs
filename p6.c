#include <stdio.h>

int main()
{
    float km, meter, cm;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meter = km * 1000;
    cm = km * 100000;

    printf("Distance in meters = %.2f\n", meter);
    printf("Distance in centimeters = %.2f\n", cm);

    return 0;
}

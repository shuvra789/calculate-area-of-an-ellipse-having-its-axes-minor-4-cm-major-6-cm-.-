//Write a program to calculate area of an ellipse having its axes (minor = 4 cm, major = 6 cm).
#include<stdio.h>

#define PI 3.1416

int main(void)
{
    float major, minor, area;

    printf("Enter length of major axis: ");

    scanf("%f", &major);
    printf("Enter length of minor axis: ");

    scanf("%f", &minor);
    area = PI * major * minor;

    printf("Area of an ellipse = %0.4f", area);

    return 0;
}

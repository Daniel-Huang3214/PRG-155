#include <stdio.h> 
#include <math.h>

/*
    Program     circle-area.c
    Student     Daniel Huang
    Date:       September 30 2023
*/

int main() {
    double radius;
    const double pi = 3.14159;

    printf("Radius? ");
    scanf("%lf", &radius);
    
    printf("\nCirle Area: %.2lf \n", pi * pow(radius, 2));
    printf("Circumference: %.2lf \n", pi * 2 * radius);
    printf("Sphere Volume: %.2lf \n", pi * 4 / 3 * pow(radius, 3));

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>

/*
    Program     circle-area2.c
    Student     Daniel Huang
    Date:       September 30 2023
*/

int main() {
    double area, radius, pi = 3.14159;

    printf("Circle Area? ");
    scanf("%lf", &area);

    radius = sqrt(area / pi);

    printf("----------------------------\n");
    printf("%15s %12.2lf \n", "Radius:", radius);
    printf("%15s %12.2lf \n", "Circumference:", pi * 2 * radius);
    printf("%15s %12.2lf \n", "Sphere Volume:", pi * 4 / 3 * pow(radius, 3));
    printf("%15s %12.2lf \n", "Sphere Surface:", pi * 4 * pow(radius, 2));

    return 0;
}
#include <stdio.h>

/*
    Program:    prg155-lab4a.c
    Student:    Daniel Huang
    Date:       September 30 2023
*/

int main() {
    int radius = 2;
    float pi = 3.14159;
    float area;

    area = pi * radius * radius;
    printf("Radius: %d \nArea: %f", radius, area);
    
    return 0;
}
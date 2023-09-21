#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Program:    converter.c
    Student:    Daniel Huang
    Date:       September 18 2023
*/

int main() {
    float celciusInput;

    printf("This program converts Celcius to Fahrenheit, rounding to one Tenth \n");
    printf("Enter the temperature in Celcius: ");
    scanf("%f", &celciusInput);

    printf("The temperature in Fahrenheit is %.1f F \n", celciusInput * 9 / 5 + 32);

    return 0;
}
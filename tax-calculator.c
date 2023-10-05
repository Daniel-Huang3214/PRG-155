#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Program:    tax-calculator.c
    Student:    Daniel Huang
    Date:       October 5 2023
*/

int main() {
    double salary, tax = 0;
    
    printf("Please enter salary: ");
    scanf("%lf", &salary);

    if (salary > 2000) {
        tax = (salary - 2000) * 0.25 + 200;
    }
    else if (salary > 1000) {
        tax = (salary - 1000) * 0.15 + 50;
    }
    else if (salary > 500) {
        tax = (salary - 500) * 0.1;
    }
    
    printf("%13s %10.2lf \n", "Income tax: $", tax);
    printf("%13s %10.2lf \n", "Net pay: $", salary - tax);

    return 0;
}
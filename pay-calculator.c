#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Program:    pay-calculator.c
    Student:    Daniel Huang
    Date:       October 5 2023
*/

int main () {
    double hours, wage, sales, commission, pay, gross_pay, tax = 0;

    printf("Please enter hours worked this week: ");
    scanf("%lf", &hours);

    printf("Please enter hourly wage: ");
    scanf("%lf", &wage);

    printf("Please enter sales total: ");
    scanf("%lf", &sales);

    pay = hours * wage;
    
    if (sales > 5000) {
        commission = (sales - 5000) * 0.02 + 50;
    } 
    else {
        commission = sales * 0.01;
    }

    gross_pay = pay + commission;

    if (gross_pay > 2000) {
        tax = (gross_pay - 2000) * 0.25 + 200;
    }
    else if (gross_pay > 1000) {
        tax = (gross_pay - 1000) * 0.15 + 50;
    }
    else if (gross_pay > 500) {
        tax = (gross_pay - 500) * 0.1;
    }

    printf("%13s %9.2lf \n", "Base pay: $", pay);
    printf("%13s %9.2lf \n", "Commission: $", commission);
    printf("%13s %9.2lf \n", "Gross pay: $", gross_pay);
    printf("%13s %9.2lf \n", "Income tax: $", tax);
    printf("%13s %9.2lf \n", "Net pay: $", gross_pay - tax);

    return 0;
}
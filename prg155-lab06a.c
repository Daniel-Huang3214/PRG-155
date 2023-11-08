#define _CRT_NO_WARNINGS_
#include <stdio.h>

/*
    Program:    prg155-lab06a.c
    Student:    Daniel Huang, Yuhui Weng
    Date:       November 1 2023    
*/

int main () {
    double balance, rate, interest, end;
    int i = 1, years;
    
    printf("Enter starting balance and interest rate: ");
    scanf("%lf %lf", &balance, &rate);
    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("+------+---------------+---------------+----------------+\n");
    printf("| Year | Start Balance | Interest Paid |    End Balance |\n");
    printf("+------+---------------+---------------+----------------+\n");

    while (i <= years) {
        interest = balance * rate / 100;
        end = balance + interest;

        printf("|  %02d  |%14.2lf |%14.2lf |%15.2lf |\n", i, balance, interest, end);
        
        balance = end;
        i++;
    }

    printf("+------+---------------+---------------+----------------+\n");
    
    return 0;
}
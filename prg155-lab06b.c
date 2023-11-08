#define _CRT_NO_WARNINGS_
#include <stdio.h>
#include <locale.h>

/*
    Program:    prg155-lab06b.c
    Student:    Daniel Huang, Yuhui Weng
    Date:       November 1 2023
*/

int main()
{
    double balance, rate, interest, end;
    int i = 1, years;

    // Set the locale to use comma as the thousands separator and period as the decimal separator
    setlocale(LC_ALL, "");

    printf("Enter starting balance and interest rate: ");
    scanf("%lf %lf", &balance, &rate);
    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("+------+-------------------+-------------------+--------------------+\n");
    printf("| Year | Start Balance     | Interest Paid     | End Balance         |\n");
    printf("+------+-------------------+-------------------+--------------------+\n");

    while (i <= years)
    {
        interest = balance * rate / 100;
        end = balance + interest;

        // Format the numbers as "$12,345.67"
        printf("|  %02d  | $%16.2lf | $%16.2lf | $%17.2lf |\n", i, balance, interest, end);

        balance = end;
        i++;
    }

    printf("+------+-------------------+-------------------+--------------------+\n");

    return 0;
}
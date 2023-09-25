#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Program:    widget.c
    Student:    Daniel Huang
    Date:       September 25 2023
*/

int main() {
    int widget;
    double price;

    printf("How many widgets are you buying? ");
    scanf("%d", &widget);

    printf("What is the price of a widget? ");
    scanf("%lf", &price);

    printf("---------------------------------------- \n");
    printf("YOUR ORDER SUMMARY \n");
    printf("---------------------------------------- \n");
    printf("%6d Widgets @ %8.2lf %14.2lf \n", widget, price, widget * price);
    printf("%25s %14.2lf \n", "13% HST", 0.13 * widget * price);
    printf("%40s \n", "-----------------------");
    printf("%25s %14.2lf \n", "Total", widget * price * 1.13);
    printf("---------------------------------------- \n");

    return 0;
}
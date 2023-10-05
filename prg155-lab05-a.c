#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Program:    prg155-lab05-a.c
    Student:    Daniel Huang
    Date:       October 5 2023
*/

int main() {
    double sales, commission;
    
    printf("Please enter sales total: ");
    scanf("%lf", &sales);

    if (sales > 5000) {
        commission = (sales - 5000) * 0.02 + 50;
    } 
    else {
        commission = sales * 0.01;
    }
    
    printf("Commission: %.2lf", commission);

    return 0;
}
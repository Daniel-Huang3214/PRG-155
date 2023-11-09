#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

/*
    Program     prg155-lab07.c
    Student     Daniel Huang
    Date:       November 9 2023
*/

void showMenu() {
    printf("\nMenu:\n");
    printf(" 1. Draw Rectangle\n");
    printf(" 2. Draw Right Triangle\n");
    printf(" 3. Draw Icoseles Triangle\n");
    printf(" 0. Exit Program\n");
}

int processChoice () {
    int input;
  
    printf("\n Make a choice (1, 2, 3 or 0): ");
    scanf("%d", &input);
    
    switch (input) {
        case 0:
            printf("\nExiting program...");
            break;
        case 1:
            printf("\nDrawing rectangle...");
            break;
        case 2:
            printf("\nDrawing right triangle...");
            break;
        case 3:
            printf("\nDrawing icoseles triangle...");
            break;
        default:
            printf("\n*** Invalid Choice! ***");
    }
    printf("\n");

    return input;
}

int main() {

    do {
        showMenu();
    } while(processChoice() != 0);

    return 0;
}
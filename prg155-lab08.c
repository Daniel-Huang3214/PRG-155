#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

/*
    Program     prg155-lab08.c
    Student     Daniel Huang
    Date:       November 16 2023
*/

void printRow(int width);
void drawRectangle(int width, int height);
void drawRightTriangle(int height);
void drawIsoscelesTriangle(int height);

void showMenu() {
    printf("\nMenu:\n");
    printf(" 1. Draw Rectangle\n");
    printf(" 2. Draw Right Triangle\n");
    printf(" 3. Draw Icoseles Triangle\n");
    printf(" 0. Exit Program\n");
}


int processChoice () {
    int input, width, height;
  
    printf("\n Make a choice (1, 2, 3 or 0): ");
    scanf("%d", &input);
    
    switch (input) {
        case 0:
            printf("\nExiting program...");
            break;
        case 1:
            printf("\nEnter Width and Height of the Rectangle: ");
            scanf("%d %d", &width, &height);
            printf("\n");

            drawRectangle(width, height);
            break;
        case 2:
            printf("\nEnter Height of the Right Triangle: ");
            scanf("%d", &height);
            printf("\n");
            
            drawRightTriangle(height);
            break;
        case 3:
            printf("\nEnter Height of the Isosceles Triangle: ");
            scanf("%d", &height);
            printf("\n");
            
            drawIsoscelesTriangle(height);
            break;
        default:
            printf("\n*** Invalid Choice! ***");
    }
    
    return input;
}

int main() {
    do {
        showMenu();
    } while(processChoice() != 0);

    return 0;
}

void printRow (int width) {
    for (int i = 0; i < width; i++){
        printf("*");
    }
    printf("\n");
}

void drawRectangle (int width, int height) {
    for (int i = 0; i < height ; i++){
        printRow(width);
    }
}

void drawRightTriangle (int height) {
    for (int i = 0; i < height; i++) {
        printRow(i * 2 + 1);
    }
}

void drawIsoscelesTriangle (int height) {
    for (int i = 0; i < height; i++) {
        printf("%*s", height - i - 1, "");
        printRow(i * 2 + 1);
    }
}
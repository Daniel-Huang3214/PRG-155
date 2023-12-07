#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/*
    Program     prg155-project.c
    Student     Daniel Huang, Yuhui Weng
    Date:       December 4 2023
*/


double getInput();
double calculateResistance();
char runCheck();

int main() {
    do {
        calculateResistance();
    } while(runCheck() == 'y');
    return 0;
}

double getInput() {
    char input[100];
    double ohm = 0.0;
    int power = 0;

    do {
        printf("Enter the Resistance (or 0 to stop): ");
        scanf("%s", input);

        if (input[0] == '-') {
            printf("Please enter a positive Value \n");
        } else if (isalpha(input[0])) {
            printf("Invalid Input \n");
        }
    } while(input[0] == '-' && isalpha(input[0]));

    size_t length = strlen(input);

    switch(input[length - 1]) {
        case 'p':
            power = -12;
            break;
        case 'n':
            power = -9;
            break;
        case 'u':
            power = -6;
            break;
        case 'm':
            power = -3;
            break;
        case 'k':
            power = 3;
            break;
        case 'K':
            power = 3;
            break;
        case 'M':
            power = 6;
            break;
        case 'G':
            power = 9;
            break;
        case 'T':
            power = 12;
            break;
        default:
            power = 0;
    }

    for (int i = 0; i < length; i++) {
        if (isdigit(input[i]) && power == 0) {
            ohm += (input[i] - '0') * pow(10, length - i - 1);
        } else if (i >= 1) {
            ohm += (input[i - 1] - '0') * pow(10, length - i - 1); 
        }
    }

    return ohm * pow(10, power);
}

double calculateResistance() {
    double resistance = 0.0, value;
    int power = 0;
    char unit = 'R';

    do {
        value = getInput();
        if (value != 0) {
            resistance += 1 / value;
        }
    } while (value != 0);

    resistance = 1 / resistance;
    
    if (resistance <= 0.0000000001){ 
        power = 12;
        unit = 'p';
    } else if (resistance <= 0.0000001){ 
        power = 9;
        unit = 'n';
    } else if (resistance <= 0.0001){ 
        power = 6;
        unit = 'u';
    } else if (resistance <= 0.1){ 
        power = 3;
        unit = 'm';
    } else if (resistance >= 1000000000000) {
        power = -12;
        unit = 'T';
    } else if (resistance >= 1000000000) {
        power = -9;
        unit = 'G';
    } else if (resistance >= 1000000) {
        power = -6;
        unit = 'M';
    } else if (resistance >= 1000){ 
        power = -3;
        unit = 'K';
    }

    printf("Total parallel Resistance is: %.2lf%c\n", resistance * pow(10, power), unit);

    return resistance;
}

char runCheck() {
    char answer = 'y';

    do {
        printf("Run again [y/n]?");
        scanf(" %c", &answer);

        if (answer != 'y' && answer != 'n') {
            printf("Answer [y] or [n] Please\n");
        } 
    } while(answer != 'y' && answer != 'n');
    return answer;
}
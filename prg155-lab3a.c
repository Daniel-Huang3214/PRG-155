#include <stdio.h>

/*
    Program:    prg155-lab3a.c
    Student:    Daniel Huang
    Date:       September 25 2023
*/

int main() {
    printf("0000000000111111111122222222222333333333444444\n");
    printf("0123456789012345678901234567890123456789012345\n");
    printf("----------------------------------------------\n");
    printf("These are some characters        : %c %c \n", 'b', 66);
    printf("This is a decimal floating point : %f \n", 123.45);
    printf("Number padded with up to 5 blanks: %5d \n", 123);
    printf("This number is padded with zeros : %05d \n", 123);
    printf("This number has 5 decimal points : %11.5f \n", 123.45);
    printf("These numbers have sign displayed: %+i, %+i \n", -123, 123);
    printf("%46s\n", "------------------------");
    printf("%28s and a %i number! \n", "This is an example...", 123);
    printf("%-28s and a %i number! \n", "This is another example...", 123);

    return 0;
}
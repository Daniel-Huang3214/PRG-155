#include <stdio.h>
#include <ctype.h>
#include <string.h>

void splitString(const char *input, char *numbers, char *letters) {
    int numIndex = 0;
    int letterIndex = 0;

    for (int i = 0; i < strlen(input); i++) {
        if (isdigit(input[i])) {
            numbers[numIndex++] = input[i];
        } else if (isalpha(input[i])) {
            letters[letterIndex++] = input[i];
        }
    }

    // Null-terminate the result strings
    numbers[numIndex] = '\0';
    letters[letterIndex] = '\0';
}

int main() {
    char input[100];
    char numbers[100];
    char letters[100];

    printf("Enter a string: ");
    scanf("%s", input);

    splitString(input, numbers, letters);

    printf("Numbers: %s\n", numbers);
    printf("Letters: %s\n", letters);

    return 0;
}
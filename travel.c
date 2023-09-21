#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    Program:    travel.c
    Student:    Daniel Huang
    Date:       September 17 2023
*/

int main() {
    float distanceTravelled, travelTime;

    printf("Please enter distance travelled in kilometres: ");
    scanf("%f", &distanceTravelled);

    printf("Please enter total travel time in minutes: ");
    scanf("%f", &travelTime);

    printf("Average speed was: %f km/h \n", distanceTravelled / (travelTime / 60));

    return 0;
}
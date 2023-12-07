#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

/*	
	Program: 	prg155-lab09.c
	Student: 	Daniel Huang
	Date: 		November 24 2023
*/

double getInput(char *prompt, double minimum);
double calculateBasePay(double hoursWorked, double hourlyWage);
double calculateCommission(double salesTotal);
double calculateGrossPay(double basePay, double commission);
double calculateIncomeTax(double grossPay);
void displayOutput(double basePay, double commission, double grossPay, double incomeTax);

int main() {
	double hours, wage, sales, basePay, commission, gross, tax;
	
	do {
		hours = getInput("Please enter hours worked this week", 0);
		wage = getInput("Please enter hourly wage", 0);
		sales = getInput("Please enter sales total", 0);
		printf("\n");
		
		basePay = calculateBasePay(hours, wage);
		commission = calculateCommission(sales);
		gross = calculateGrossPay(basePay, commission);
		tax = calculateIncomeTax(gross);

		displayOutput(basePay, commission, gross, tax);
	} while (getInput("Type 0 to exit program or any number to continue", 0) != 0);	
		
	return 0;
}

double getInput(char *prompt, double minimum) {
	double userInput;
	
	do {
		printf("%s: ", prompt);

		if (scanf("%lf", &userInput) != 1 || userInput < minimum) {
			printf("Invalid input! Please try again.\n\n");
			while (getchar() != '\n');
		}
	} while (userInput < minimum);
	
	return userInput;
}

double calculateBasePay(double hoursWorked, double hourlyWage) {
	return hoursWorked * hourlyWage;
}

double calculateCommission(double salesTotal) {
	if (salesTotal > 5000) {
		salesTotal = (salesTotal - 5000) * 0.02 + 50;
	} 
	else {
		salesTotal = salesTotal * 0.01;
	}

	return salesTotal;
}

double calculateGrossPay(double basePay, double commission) {
	return basePay + commission;
}

double calculateIncomeTax(double grossPay) {
	if (grossPay > 2000) {
        grossPay = (grossPay - 2000) * 0.25 + 200;
    }
    else if (grossPay > 1000) {
        grossPay = (grossPay - 1000) * 0.15 + 50;
    }
    else if (grossPay > 500) {
        grossPay = (grossPay - 500) * 0.1;
    }
	else {
		grossPay = 0;
	}
	
	return grossPay;
}

void displayOutput(double basePay, double commission, double grossPay, double incomeTax) {
	printf("%13s %9.2lf \n", "Base pay: $", basePay);
    printf("%13s %9.2lf \n", "Commission: $", commission);
    printf("%13s %9.2lf \n", "Gross pay: $", grossPay);
    printf("%13s %9.2lf \n", "Income tax: $", incomeTax);
    printf("%13s %9.2lf \n", "Net pay: $", grossPay - incomeTax);
}
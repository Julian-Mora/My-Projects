/*
Name:      <Julian Mora>
Student#:  <110999174>
Section:   <IPCSXX>
*/

// Start your code below:
#include <stdio.h>
int main(void) {
	double Due = 8.68;
	double GST;
	int Due2;
	int Loonies = 0;
	int Quarters = 0;
	int Dimes = 0;
	int Nickels = 0;
	int Pennies = 0;
	printf("Please enter the amount to be paid: %.2f\n", Due);
	GST = Due * 0.13 + .005;
	printf("GST: %.2f\n", GST);
	Due = Due + GST;
	printf("Balance owing: %.2f\n", Due);
	while (Due > 1) {
		Loonies = Loonies + 1;
		Due = Due - 1;
	}
	printf("Loonies required: %d, balance owing %.2f\n", Loonies,(float) Due);
	
	Due = Due * 100;
	Due2 = Due;
	

	while ((float)Due2 > 25) {
		Quarters = Due2 / 25;
		Due2 %= 25;
	}
	printf("Quarters required: %d, balance owing %.2f\n", Quarters,(float) Due2 / 100);
	

	while ((float)Due2 > 10) {
		Dimes = Due2 / 10;
		Due2 %= 10;
	}
	printf("Dimes required: %d, balance owing %.2f\n", Dimes,(float) Due2 / 100);
	
	
	
	while ((float)Due2 > 5) {
		Nickels = Due2 / 5;
		Due2 %= 5;
	}
	printf("Nickels required: %d, balance owing %.2f\n", Nickels, (float) Due2 / 100);
	
	while ((float)Due2 >= 1) {
		Pennies = Due2 / 1;
		Due2 %= 1;
	}

	printf("Pennies required: %d, balance owing %.2f\n", Pennies,(float) Due2 / 100);

	return 0;
}
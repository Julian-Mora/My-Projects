/*
Name:      <Julian Mora>
Student#:  <110999174>
Section:   <IPCSXX>
*/

// Start your code below:
#include <stdio.h>
int main(void) {
	float Due = 8.68;
	float GST = 0;
	int gst;
	int Due2;
	int AmmountOwed;
	int Loonies = 0;
	int Quarters = 0;
	int Dimes = 0;
	int Nickels = 0;
	int Pennies = 0;
	printf("Please enter the amount to be paid: $%.2f <ENTER>\n", Due);
	GST = Due * 0.13 + .005;
	printf("GST: %lf\n", GST);
	Due = Due + GST;
	printf("Balance owing: %.2f\n", Due);
	while (Due > 0) {
		Loonies++;
		Due--;
	}
	printf("Loonies required: %d, balance owing %.2f\n", Loonies, Due);
	
	while (Due > 0) {
		Quarters++;
		Due = Due - 0.25;
	}
	
	printf("Quarters required: %d, balance owing %.2f\n", Quarters, (float)Due2 / 100);
	while (Due > 0) {
		Dimes++;
		Due = Due - 0.1;
	}
	printf("Dimes required: %d, balance owing %.2f\n", Dimes, (float)Due2 / 100);
	Due = Due * 100;
	Due2 = Due;
	Due2 = Due2 % 10;
	while (Due > 0) {
		Nickels++;
		Due = Due - 0.5;
	}
	printf("Nickels required: %d, balance owing %.2f\n", Nickels, (float)Due2 / 100);
	Due = Due * 100;
	Due2 = Due;
	Due2 = Due2 % 5;
	while (Due > 0) {
		Pennies++;
		Due = Due - 0.1;
	}
	Due = Due * 100;
	Due2 = Due;
	Due2 = Due2 % 1;
	printf("Pennies required: %d, balance owing %.2f\n", Pennies, (float)Due2 / 100);







	return 0;
}
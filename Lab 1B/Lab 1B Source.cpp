/*
Muslim Razi
muslimrazi@my.smccd.edu
July 10, 2018
Lab 1B - Change
*/

#include <iostream>
using namespace std;

int main()
{
	// Declaration of variables
	int quarters, dimes, nickles, pennies;
	double cost;

	cout << "Code by Muslim Razi\n\n";

	// Receive numbers of coins through cout and cin
	cout << "Enter amount of quarters: ";
	cin >> quarters;
	cout << "Enter amount of dimes: ";
	cin >> dimes;
	cout << "Enter amount of nickles: ";
	cin >> nickles;
	cout << "Enter amount of pennis: ";
	cin >> pennies;

	// The calculation for total value
	cost = (quarters*.25) + (dimes*.1) + (nickles*.05) + (pennies*.01);

	// Output the actual value after calculating
	cout << "\nThe total value of " << quarters << " quarters, " << dimes << " dimes, " << nickles << " nickles, and " << pennies << " pennies is $" << cost << endl;
}

/*

	Code by Muslim Razi

	Enter amount of quarters: 3
	Enter amount of dimes: 0
	Enter amount of nickles: 5
	Enter amount of pennis: 23

	The total value of 3 quarters, 0 dimes, 5 nickles, and 23 pennies is $1.23
	Press any key to continue . . .


*/
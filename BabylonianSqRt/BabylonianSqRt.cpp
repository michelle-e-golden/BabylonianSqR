// BabylonianSqRt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include <string>
#pragma warning(disable: 4996)

/* This is an application that will use the Babylonian Square Root Algorithm 
	to find the square root of a number with .001 precision*/

int main()
{
	const int DIVIDE = 2;
	const double APPROX = .001;
	int input;

	double guess, r, outcome;

	// code to fix output precision for the outcome

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	// Output to user: Takes integer
	cout << "Enter a number and I will apply the Babylonian square root algorithm\n"
			"until I am within .001 of the correct answer.\n";

	cin >> input;

	cout << "You entered " << input << "\n";

	guess = input / DIVIDE;  // Makes an initial guess by dividing input in half

	// Do while loop to run Babylonian square root algorithm
	do {
		r = input / guess;  // divides the input by the guess above

		guess = (guess + r) / DIVIDE;  // sets guess back to the last guess plus r divided by 2

		cout << "guessing " << guess << "\n";  // Output to track progress

	} while ((guess-r) > APPROX); // Keeps running as long as guess - r is greater than .001

	cout << "The Babylons algorithm gives " << guess << "\n";  // Output for algorith

	outcome = guess * guess;  // Checks accuracy

	cout << "Checking... " << guess << " * " << guess << " = " << outcome << "\n";  // Prints out guess accuracy

	system("PAUSE");
	return 0;
}
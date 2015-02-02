/*
 * MathChoice.cpp
 *
 *  Created on: Feb 2, 2015
 *      Author: SGT Roy
 */

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()

{
	int userSelect = 0;
	int nVar = 0;
	int xVar = 0;
	double choice1 = 0;
	string cont = "Yes";

	while (cont == "Yes" or cont == "yes")
	{

		cout << "Please choose which one of the following series to compute:"
				<< endl << endl;

		cout << "Option 1) 1 + 1/2 + 1/3 + ... + 1/n" << endl;
		cout
				<< "Option 2) ((((x * 2) * 2) * ...) * 2) for a series of n multiplications "
				<< endl;
		cout << "Option 3) x + (x * 1) + (x * 2) + (x * 3) + ... + (x * n)"
				<< endl;
		cout << "Enter 1, 2, or 3 to choose your selection: ";
		cin >> userSelect;
		cout << endl;

		if (!userSelect)
		{
			cout << "Invalid Choice!" << endl;
			break;
		}

		if (userSelect == 1)
		{
			cout << "Please enter the integer to use as the 'n' variable: ";
			cin >> nVar;
			if (!nVar)
			{
				cout << "Invalid Choice!" << endl;
				break;
			}
			for (int i = 1; i <= nVar; i++)
			{
				choice1 += (1.0 / nVar);
			}

		}

		cout << choice1 << endl;

	}

	return (0);
}


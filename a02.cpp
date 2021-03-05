/*******************************************************************************
** Program Name:    Oreo Calculator
** File Name:       a02.cpp
** Author:          Milly Dorante-Morales
** Date:            February 08, 2021
** Assignment:      02
** Description:     Calculates the amount of calories and servings consumed
					and returns it.
** Sources:         None.
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

const int SERVE_SIZE = 3;
const int CAL_PER_OREO = 53;

//*****************************************************************************
// Function Name:	calcCals
// Parameters:		one integer, oreos.
// Description:		The function multiplies oreos by 53 and returns the result
//*****************************************************************************

int calcCals(int oreos) {
	//const int calPerOreo = 53;
	int calories = oreos * CAL_PER_OREO;
	//cout << calories << endl;
	return calories;
}

//*****************************************************************************
// Function Name:	calcServs
// Parameters:		one integer, oreos.
// Description:		The function divides oreos by 3.0 and returns the result.
//*****************************************************************************

double calcServs(int oreos) {
	//const int servSize = 3;
	double servs = oreos / (double)SERVE_SIZE;
	//cout << servs << endl;
	return servs;
}

int main() {
	int oreos = 0;

	cout << "Welcome to the Oreo Calculator!\n" << endl;
	cout << "Enter the number of Oreos eaten: ";
	cin >> oreos;
	cout << "\n" << oreos << " Oreos equals " <<setprecision(2) <<
		calcServs(oreos) << " servings!" << endl;
	cout << "You consumed " << calcCals(oreos) << " calories.\n";
	cout << "\nKeep eating Oreos!" << endl;

	return 0;
}

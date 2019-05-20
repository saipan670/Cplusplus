#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int townAPop;
	int townBPop;
	double growthRateTownA;
	double growthRateTownB;
	int numOfYears = 0;

	// Prompt user to enter population of town A
	cout << "Enter the current population of town A: ";
	cin >> townAPop;
	cout << endl;

	// Prompt user to enter population of town B
	cout << "Enter the current population of town B: ";
	cin >> townBPop;
	cout << endl;

	// Prompt user to enter growth rate of town A
	cout << "Enter the growth rate of town A: ";
	cin >> growthRateTownA;
	cout << endl;

	// Prompt user to enter growth rate of town B
	cout << "Enter the growth rate of towm B: ";
	cin >> growthRateTownB;
	cout << endl;

	// Determine the number of years in which town A will be greater than or equal
	// to the population of town B
	while (townAPop < townBPop) {
		townAPop = static_cast<int>(townAPop * (1 + growthRateTownA / 100.0));
		townBPop = static_cast<int>(townBPop * (1 + growthRateTownB / 100.0));
		numOfYears++;
	}

	// Output how many years the population of town A will be greater than
	// or equal to the population of town B
	cout << "After " << numOfYears << " years(s) the population of town A"
		<< " will be greater than or equal to the population of town B." << endl;
	cout << "Population of town A is: "
		<< townAPop << endl;
	cout << "Population of town B is: "
		<< townBPop << endl;

	return 0;
}

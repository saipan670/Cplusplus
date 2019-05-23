#include <iostream>
#include <iomanip>

using namespace std;

const double PERSONAL_EXEMPTION = 1500.00;

void getData(char& mStatus, int& noOfChildren, double& salary, double& pContribPension);
double taxAmount(char mStatus, int noOfChildren, double salary, double pContribPension);

int main() {
	
	// Declare variables
	char mStatus = ' ';
	int noOfChildren = 0;
	double pContribPension = 0, salary = 0;

	// Set precision
	cout << fixed << showpoint << setprecision(2) << endl;

	// Prompt and read the gross salary
	getData(mStatus, noOfChildren, salary, pContribPension);

	// Output federal tax
	cout << "Your federal tax is: " <<
		taxAmount(mStatus, noOfChildren, salary, pContribPension) << endl;
	
	system("pause");

	return 0;
}

void getData(char& mStatus, int& noOfChildren, double& salary, double& pContribPension) {

	// Prompt and read marital status from user
	cout << "Enter the marital status (enter m for married or s for single): ";
	cin >> mStatus;
	cout << endl;
	
	if (tolower(mStatus) == 'm') {

		// Prompt and read number of children under 14 if married 
		cout << "Enter the number of children under the age of 14: ";
		cin >> noOfChildren;
		cout << endl;

		// Prompt user to enter spouses combined salary
		cout << "Enter your combined salary: ";
		cin >> salary;
		cout << endl;
	}
	else {

		// Prompt and read the salary from user if single
		cout << "Enter your salary: ";
		cin >> salary;
		cout << endl;
	}

	// Prompt user to enter the percentage contributed to a pension
	// With a limit of 6%
	cout << "Enter your pension plan contribution (up to 6%): ";
	cin >> pContribPension;
	cout << endl;

	// Calculate pension
	pContribPension = (pContribPension / 100) * salary;
}

double taxAmount(char mStatus, int noOfChildren, double salary, double pContribPension) {

	double stdExemp;
	double taxIncome;
	double fedTax;
	int numOfPeople = 0;

	// Determine the stanndard exemption
	if (tolower(mStatus) == 'm') {
		stdExemp = 7000;
		numOfPeople = 2 + noOfChildren;
	}
	else {
		stdExemp = 4000;
		numOfPeople = 1;
	}

	// Calculate the taxable income
	taxIncome = salary - ((PERSONAL_EXEMPTION * numOfPeople) + stdExemp + pContribPension);

	// Calculate federal tax
	if (taxIncome >= 0 && taxIncome <= 15000) {
		fedTax = taxIncome * 0.15;
		
	}
	else if (taxIncome >= 15001 && taxIncome <= 40000) {
		fedTax = 2250.0 + (taxIncome - 15000.0) * 0.25;
	}
	else {
		fedTax = 8460.0 + (taxIncome - 40000.0) * 0.35;
	}

	return fedTax;
		
} 
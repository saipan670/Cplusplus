#include <iostream>

using namespace std;

void menu();
void addFractions(int num1, int num2, int den1, int den2, int& num, int& den);
void subtractFractions(int num1, int num2, int den1, int den2, int& num, int& den);
void multiplyFractions(int num1, int num2, int den1, int den2, int& num, int& den);
void divideFractions(int num1, int num2, int den1, int den2, int& num, int& den);

int main() {

	// Declare variables
	int num1, num2, den1, den2, num, den;
	int input;

	// Display menu
	menu();

	while (true) {
		// Prompt user to enter opertion to perform
		cout << "\nEnter the operation to perform: ";
		cin >> input;

		// Prompt use to enter values
		cout << "Enter the numerator for fraction 1: ";
		cin >> num1;

		cout << "Enter the denominator for fraction 1: ";
		cin >> den1;

		cout << "Enter the numerator for fraction 2: ";
		cin >> num2;

		cout << "Enter the denominator for fraction 2: ";
		cin >> den2;

		cout << endl;

		// Determine what option user wants to perform and output result
		switch (input) {
		case 1:
			addFractions(num1, num2, den1, den2, num, den);
			cout << num1 << "/" << den1 << " + " << num2 << "/" << den2
				<< " = " << num << "/" << den;
			break;
		case 2:
			subtractFractions(num1, num2, den1, den2, num, den);
			cout << num1 << "/" << den1 << " - " << num2 << "/" << den2
				<< " = " << num << "/" << den;
			break;
		case 3:
			multiplyFractions(num1, num2, den1, den2, num, den);
			cout << num1 << "/" << den1 << " * " << num2 << "/" << den2
				<< " = " << num << "/" << den;
			break;
		case 4:
			divideFractions(num1, num2, den1, den2, num, den);
			cout << num1 << "/" << den1 << " / " << num2 << "/" << den2
				<< " = " << num << "/" << den;
			break;
		}

		cout << endl;
	}
	system("pause");
	return 0;
}



void menu() {

	// Let the user know what the program does
	cout << "This program allows you to perform arithmetic operations on fractions\n\n";

	// Display menu to user
	cout << "1 : To add fraction" << endl;
	cout << "2 : To subtract fraction" << endl;
	cout << "3 : To multiply fraction" << endl;
	cout << "4 : To divide fraction" << endl;

} // menu

// Add fractions
void addFractions(int num1, int num2, int den1, int den2, int& num, int& den) {
	num = (num1 * den2) + (num2 * den1);
	den = (den1 * den2);
}

// Subtract fractions
void subtractFractions(int num1, int num2, int den1, int den2, int& num, int& den) {
	num = (num1 * den2) - (num2 * den1);
	den = (den1 * den2);
}

// Multiply fractions
void multiplyFractions(int num1, int num2, int den1, int den2, int& num, int& den) {
	num = num1 * num2;
	den = den1 * den2;
}

// Divide fractions
void divideFractions(int num1, int num2, int den1, int den2, int& num, int& den) {
	num = num1 * den2;
	den = num2 * den1;
}

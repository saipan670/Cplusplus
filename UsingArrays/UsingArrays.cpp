/*Write a C++ program that declares an array alpha of 50 components of type double.
Initialize the array so that the first 25 components are equal to the square of the index variable, 
and the last 25 components are equal to three times the index variable. Output the array so that 10 elements per line are printed */

#include <iostream>
#include <iomanip>

using namespace std;

void initialize(double list[], int size);
void print(double list[], int size);

int main() {

	// Declare an array of 50 components
	double alpha[50];

	// Intialize the array
	initialize(alpha, 50);

	// Print the array
	print(alpha, 50);

	system("pause");

	return 0;
}

void initialize(double list[], int size) {

	// First 25 components are equal to the square of the index
	for (int i = 0; i < 25; i++) {
		list[i] = i * i;
	}
	// Last 25 components are equal to 3 times the index
	for (int j = 25; j < size; j++) {
		list[j] = j * 3;
	}
}

void print(double list[], int size) {
	
	// Output the array so that 10 elements per line are printed

	for (int i = 0; i < size; i++) {

		cout << setw(4) << list[i] << " ";

		if ((i+1) % 10 == 0) {
			cout << endl;
		}

		
	}
	cout << endl;
}
#include <iostream>

using namespace std;

const int NO_OF_MONTHS = 12;

void getData(int twoDims[][2], int rows);
int averageHigh(int twoDims[][2], int rows);
int averageLow(int twoDims[][2], int rows);
int indexHighTemp(int twoDims[][2], int rows);
int indexLowTemp(int twoDims[][2], int rows);

int main() {
	
	int hiLowArray[NO_OF_MONTHS][2];
	int indexHigh;
	int indexLow;

	// Get the temperature data from user
	getData(hiLowArray, NO_OF_MONTHS);

	// Output temperature data
	cout << "Average high temperature: " << averageHigh(hiLowArray, NO_OF_MONTHS) << endl;
	cout << "Average low temperature: " << averageLow(hiLowArray, NO_OF_MONTHS) << endl;

	indexHigh = indexHighTemp(hiLowArray, NO_OF_MONTHS);
	indexLow = indexLowTemp(hiLowArray, NO_OF_MONTHS);
	
	cout << "Index high temperature: " << hiLowArray[indexHigh][0] << endl;
	cout << "Index low temperature: " << hiLowArray[indexLow][1] << endl;
	
	return 0;
}

void getData(int twoDim[][2], int rows) {

	int i;

	// Prompt and read high temp input for each month
	cout << "Enter high temperature for each month" << endl;
	
	for (i = 0; i < rows; i++) {
		cin >> twoDim[i][0];
	}

	// Prompt and read low temp input for each month
	cout << "Enter low temperature for each month" << endl;

	for (i = 0; i < rows; i++) {
		cin >> twoDim[i][1];
	}

} // getData

int averageHigh(int twoDim[][2], int rows) {

	double sum;

	// Calculate the sum
	for (int i = 0; i < rows; i++) {
		sum += twoDim[i][0];
	}

	// Return the average of high temps
	return sum / rows;

} // averageHigh

int averageLow(int twoDim[][2], int rows) {

	double sum;

	// Calculate the sum
	for (int i = 0; i < rows; i++) {
		sum += twoDim[i][1];
	}

	// Return the average of high temps
	return sum / rows;

} // averageHigh

int indexHighTemp(int twoDim[][2], int rows) {

	int index;
	double highest = twoDim[0][0];

	// Look for the highest temp
	for (int i = 1; i < rows; i++) {

		if (twoDim[i][0] > highest) {
			
			// Set highest to the highest temp found
			// Track index
			highest = twoDim[i][0];
			index = i;
		}
	}

	return index;

} // indexHighTemp

int indexLowTemp(int twoDim[][2], int rows) {

	int index;
	double lowest = twoDim[0][1];

	// Look for the lowest temp
	for (int i = 1; i < rows; i++) {

		if (twoDim[i][1] < lowest) {

			// Set lowest to the lowest temp found
			// Track index
			lowest = twoDim[i][1];
			index = i;
		}
	}

	return index;

} // indexHighTemp
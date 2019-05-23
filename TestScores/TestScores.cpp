/*Write a program that reads a file consisting of students’ test scores in the range 0–200.
It should then determine the number of students having scores in each of the following ranges :
0–24, 25–49, 50–74, 75–99, 100–124, 125–149, 150–174, and 175–200.*/


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// Function Prototypes
void readData(ifstream& inputFile, int testScores[]);
void findRange(int testScores[], int range[]);
void print(int testScores[], int size);

// Constants
const int MAX = 50;
const int NUM_RANGE = 8;
const int SIZE_RANGE = 25;

int main() {
	
	// Declare variables
	ifstream infile;
	string fileName = "Ch8_Ex4Data.txt";

	int testScores[MAX];
	int ranges[NUM_RANGE];

	// Prompt user to enter file name
	infile.open(fileName);

	// Terminate program if program can't open file
	if (!infile) {
		cout << "Can't open file. Please try again" << endl;
		return 1;
	}
	
	// Read data from txt file
	readData(infile, testScores);
	
	// Categorize scores with ranges
	findRange(testScores, ranges);
	
	// Print data
	print(ranges, NUM_RANGE);

	system("pause");

	// Print data
	infile.close();


	return 0;
}

void readData(ifstream& inputFile, int testScores[]) {

	// Declare variables
	int score;
	int index = 0;

	// Read the first test score from inputFile
	inputFile >> score;

	// Read remaining test scores from file
	while (inputFile) {

		// Store score
		testScores[index] = score;
		
		// Increment index
		index++;

		// Read next score
		inputFile >> score;
	}
}

void findRange(int testScores[], int range[]) {
	
	int score;
	int count = 26;;

	// Initialize range array to zero
	for (int i = 0; i < NUM_RANGE; i++) {
		range[i] = 0;
	}

	for (int i = 0; i < count; i++) {
		
		score = testScores[i];

		// Determine the which range the test score falls under
		// Increment that range
		if (score >= 0 && score <= 24) {
			range[0]++;
		}
		else if (score >= 25 && score <= 49) {
			range[1]++;
		}
		else if (score >= 50 && score <= 49) {
			range[2]++;
		}
		else if (score >= 75 && score <= 99) {
			range[3]++;
		}
		else if (score >= 100 && score <= 124) {
			range[4]++;
		}
		else if (score >= 125 && score <= 149) {
			range[5]++;
		}
		else if (score >= 150 && score <= 174) {
			range[6]++;
		}
		else if (score >= 175 && score <= 200) {
			range[7]++;
		}
		else {
			cout << "Test score not within range" << endl;
		}
	}
}

// Print results
void print(int testScores[], int size) {

	// Declare variables
	int range;
	int lowerRange = 0;
	int upperRange = 24;

	// Output a header
	cout << "\nScore Range\tNumber of Students" << endl;

	// Display the score range and number of students
	for (range = 0; range < size; range++) {
		cout << setw(3) << lowerRange << " - " << upperRange
			<< "\t\t" <<testScores[range] << endl;

		// Change range values by adding 25
		lowerRange += SIZE_RANGE;
		upperRange += SIZE_RANGE;
	}
}

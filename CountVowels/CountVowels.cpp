#include <iostream>
#include <string>

using namespace std;

// Function prototype
int countLcVowel(string, char);

int main() {

	// Variables to declare
	string input;

	// Prompt user to enter string
	cout << "Enter a string: ";
	getline(cin, input);

	// Test function
	cout << "The number of a's: " << countLcVowel(input, 'a') << endl;
	cout << "The number of e's: " << countLcVowel(input, 'e') << endl;
	cout << "The number of i's: " << countLcVowel(input, 'i') << endl;
	cout << "The number of o's: " << countLcVowel(input, 'o') << endl;
	cout << "The number of u's: " << countLcVowel(input, 'u') << endl;

	return 0;
}

// Function defintion
int countLcVowel(string str, char ch) {

	int count = 0;
	int length = str.length(); // Determine the length of the string

	// Find the given vowels within the string
	for (int i = 0; i < length; i++) {
		if (str.at(i) == ch) {
			count++;
		} //if
	} //for

	return count;
} // countLcVowel

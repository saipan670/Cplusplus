/*Write a program that prompts the user to input a sequence of characters and outputs the number of vowels.
(Use the function isVowel written in Programming Exercise 2.)*/

#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch);

int main() {
	// Variables
	string inputChars; 
	int length = 0;
	int count = 0;

	// Prompt user to enter a sequence of characters
	cout << "Enter a sequence of characters: ";
	getline(cin, inputChars);

	length = inputChars.length();

	for (int i = 0; i < length; i++) {
		if (isVowel(inputChars[i])) {
			count++;
		}
	}

	cout << "The number of vowels are " << count << endl;

	system("pause");

	return 0;
}

// Method definitionc
bool isVowel(char ch) {

	ch = tolower(ch);

	switch (ch) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return true;
	default:
		return false;
	}
}
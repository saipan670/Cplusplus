#include <iostream>

using namespace std;

//Function Prototype
bool isVowel(char ch);

int main() {

	// Variable declaration
	char ch;
	bool result;

	// Prompt user to enter a character
	cout << "Enter a character: ";
	cin >> ch;

	// Call the isVowel function and return the result
	result = isVowel(ch);

	// Output the result whether it is a vowel or not
	if (result == true) {
		cout << ch << " is a vowel" << endl;
	}
	else {
		cout << ch << " is not a vowel" << endl;
	}

	system("pause");

	return 0;
}

// Method definition
bool isVowel(char ch) {

	// Convert the incoming character to a lower case
	ch = tolower(ch);

	// Determine if the incoming character is a vowel or not
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

} // iisVowel

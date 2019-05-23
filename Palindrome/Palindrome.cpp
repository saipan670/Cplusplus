#include <iostream>
#include <string>

using namespace std;

// Function prototype
bool isPalindrome(string str);

int main() {

	// Variables to declare
	string usrString;
	bool result = false;

	// Prompt user to enter a string
	cout << "Please enter a string: ";
	cin >> usrString;

	result = isPalindrome(usrString);

	// Display whethe or not the given string is a palindrome
	if (result == true) {
		cout << usrString << " is a Palindrome" << endl;
	}
	else {
		cout << usrString << " is not a Palindrome" << endl;
	}

	system("pause");

	return 0;
}

// Method definition of isPalindrome
bool isPalindrome(string str) {

	// Determine the length of the string
	int length = str.length();

	for (int i = 0; i < length / 2; i++) {
		if ((toupper(str[i])) != toupper((str[length - 1 - i]))) {
			return false;
		} // if    
	} // for loop

	return true;

}// isPalindrome

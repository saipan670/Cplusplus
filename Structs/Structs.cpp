#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct computerType
{
	string manufacturer;
	string modelType;
	string processorType;
	int ram;
	int hardDriveSize;
	int yearBuilt;
	double price;
};

int main() {
	
	computerType computer;

	// Set the precision
	cout << fixed << showpoint << setprecision(2);

	// Prompt and read manufacturer from the user
	cout << "Enter the name of the manufacturer: ";
	getline(cin, computer.manufacturer);

	// Prompt and read model type from user
	cout << "Enter the model of the computer: ";
	getline(cin, computer.modelType);

	// Prompt and read processor type from user
	cout << "Enter processor type: ";
	getline(cin, computer.processorType);

	// Prompt and read RAM size from user
	cout << "Enter the size of the RAM (in GB): ";
	cin >> computer.ram; 

	// Prompt and read hard drive size from user
	cout << "Enter the size of hard drive (in GB): ";
	cin >> computer.hardDriveSize;

	// Prompt and read year computer was built
	cout << "Enter the year the computer was built: ";
	cin >> computer.yearBuilt;

	// Prompt and read price from user
	cout << "Enter the price: ";
	cin >> computer.price;

	cout << endl;;

	// Print the details
	cout << "Manufacturer: " << computer.manufacturer << endl;
	cout << "Model: " << computer.modelType << endl;
	cout << "Processor: " << computer.processorType << endl;
	cout << "Ram: " << computer.ram << endl;
	cout << "Hard Drive Size: " << computer.hardDriveSize << endl;
	cout << "Year Built: " << computer.yearBuilt << endl;
	cout << "Price: " << computer.price << endl;

	return 0;
}
/* Define an enumeration type triangleType that has the values scalene, isosceles, equilateral, and noTriangle.
Write a function triangleShape that takes as parameters three numbers, each of which represents the length of a side of the triangle.
The function should return the shape of the triangle. 
(Note: In a triangle, the sum of the lengths of any two sides is greater than the length of the third side.)
Write a program that prompts the user to input the length of the sides of a triangle and outputs the shape of the triangle */


#include <iostream>

using namespace std;

// Define enumeration
enum triangleType { scalene, isoceles, equilateral, noTriangle };
void printShape(triangleType triangle);

triangleType triangleShape(double side1, double side2, double side3);

int main() {

	// Define variables
	double side1, side2, side3;

	triangleType triangle;

	// Prompt user to enter the length for each side of the triangle
	cout << "Enter the length of the first side: ";
	cin >> side1;

	cout << "Enter the length of the second side: ";
	cin >> side2;

	cout << "Enter the length of the third side: ";
	cin >> side3;

	// Call the triangleShape function
	triangle = triangleShape(side1, side2, side3);
	
	printShape(triangle);

	system("pause");

	return 0;
}

// Determine the type of triangle by comparing the sides
triangleType triangleShape(double side1, double side2, double side3) {

	if (side1 == side2 && side2 == side3) {
		return equilateral;
	}
	else if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
		if (side1 == side2 || side2 == side3 || side1 == side3) {
			return isoceles;
		}
		else {
			return scalene;
		}
	}
	else {
		return noTriangle;
	}
}

// Print the type of triangle
void printShape(triangleType triangle) {

	switch (triangle) {
	case scalene:
		cout << "Shape of the triangle is scalene" << endl;
		break;
	case isoceles:
		cout << "Shape of the triangle is isosceles" << endl;
		break;
	case equilateral:
		cout << "Shape of the triangle is equilateral" << endl;
		break;
	case noTriangle:
		cout << "Shape is not a triangle" << endl;
		break;
	}

} // printShape

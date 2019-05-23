#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// Funciton prototype
void minCost(double costOverLand, double costUnderWater, double factoryDistance,
	double riverWidth);

void cost(double costOverLand, double costUnderWater, double factoryDistance,
	double riverWidth, double& minCost, double& minPwrLnOnGrnd);

int main() {

	// Variables to declare
	double riverWidth, factoryDistance;
	double costUnderWater, costOverLand;
	double minCost, minPwrLnOnGrnd, minPwrLnUndWat;

	
	// Set precision
	cout << fixed << showpoint << setprecision(2) << endl;

	// Prompt and read values from user
	cout << "Enter the width of the river in miles: ";
	cin >> riverWidth;

	cout << "Enter the distance between the power station and factory down the river in miles: ";
	cin >> factoryDistance;

	cout << "Enter the cost, per foot, of power line under water: ";
	cin >> costUnderWater;

	cout << "Enter the cost, per foot, of power line on the ground: ";
	cin >> costOverLand;

	// Call the function
	//minCost(costOverLand, costUnderWater, factoryDistance, riverWidth);
	cost(costOverLand, costUnderWater, factoryDistance, riverWidth,
		minCost, minPwrLnOnGrnd);

	// Output the statements
	cout << "Power line on ground:" << minPwrLnOnGrnd
		<< " miles." << endl;

	// Calculate power line under water
	minPwrLnUndWat = sqrt(pow((factoryDistance - minPwrLnOnGrnd), 2)
		+ riverWidth * riverWidth);

	cout << "Power line under water: " << minPwrLnUndWat
		<< " miles." << endl;

	cout << "Minimum cost: $" << minCost << endl;

	system("pause");

	return 0;
}

// Function definition
void minCost(double costOverLand, double costUnderWater, double factoryDistance,
	double riverWidth) {

	double distance, tempCost, minCost;
	double widthMin = 0;
	double distanceMin = 0;
	double pwrOnGrnd = 0.0;

	// Calculate the minimum cost
	minCost = (riverWidth * costUnderWater) + (factoryDistance * costOverLand);

	do {

		// Determine cost with dimensions
		distance = sqrt((riverWidth * riverWidth) + (pwrOnGrnd * pwrOnGrnd));
		tempCost = distance * costUnderWater;
		tempCost += (factoryDistance - pwrOnGrnd) * costOverLand;

		// If cost is less than initial min cost
		// Change the values of width and distance
		if (minCost > tempCost) {
			widthMin = distance;
			distanceMin = factoryDistance - pwrOnGrnd;
			minCost = tempCost;
		}

		// add pwrOnGrnd by 0.1
		pwrOnGrnd += 0.1;

	} while (pwrOnGrnd < factoryDistance);

	// Print report
	cout << "Length of power line under water is: " << widthMin << endl;
	cout << "Length of power line over land is: " << distanceMin << endl;
	cout << "Cost of power line: " << minCost << endl;

}

void cost(double costOverLand, double costUnderWater, double factoryDistance,
	double riverWidth, double& minCost, double& minPwrLnOnGrnd) {

	double pwrLnOnGrnd = 0.0; //y
	double pwrLnUnWat; // y
	double cost;

	minCost = 1000000000.00;
	minPwrLnOnGrnd = 0.0;

	while (pwrLnOnGrnd <= factoryDistance) {
		pwrLnUnWat = sqrt(pow((factoryDistance - pwrLnOnGrnd), 2) + riverWidth * riverWidth);
		cost = 5280 * (costOverLand * pwrLnOnGrnd + costUnderWater * pwrLnUnWat);

		if (minCost > cost) {
			minCost = cost;
			minPwrLnOnGrnd = pwrLnOnGrnd;
		}
		pwrLnOnGrnd += 0.00001;
	}

}


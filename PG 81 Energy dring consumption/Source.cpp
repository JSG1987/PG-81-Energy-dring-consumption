//This program is for calculating energy drink consumption
#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
	float multiDrink; //   percentage of customers who bought one or more drinks
	float citrisflavor; // percentage of customers who prefered citris flavored drinks
	int numSurveyed; // total number of people surveyed
	int totalMultiDrink;// actual number of customers who bought one or more drinks
	int totalCitrisFlavor; // actual number of customers who bought only citris flavored drinks
	
	cout << "How many people did you survey? \n";
	cin >> numSurveyed;
	cout << "What was the percentage of those who bought one or more drinks? \n";
	cin >> multiDrink;
	cout << "What was the percentage of those who bought only the citris flavored drink? \n";
	cin >> citrisflavor;

	totalMultiDrink = multiDrink * numSurveyed;
	totalCitrisFlavor = citrisflavor * numSurveyed;
	
	cout << "The number of people who bought one or more drinks is: " << totalMultiDrink << endl;
	cout << "The number of people who bought only citris drinks is: " << totalCitrisFlavor << endl;









	system("PAUSE");
	return 0;
}
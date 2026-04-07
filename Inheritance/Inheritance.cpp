/*
Jaxon Finkelstein
4/7/26
CIS 1202 K01
V1.0
Inheritance
*/

#include "Car.h"
#include "Truck.h"

int main() {
	string manufacturer;
	cout << "Vehicle Input" << endl;
	cout << string(13, '-') << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	int year = getInt("Enter the year built: ", 1, 2100);

	Vehicle vehicleData(manufacturer, year);
	cout << "\nVehicle Information" << endl;
	cout << string(20, '-') << endl;
	vehicleData.displayInfo();

	cout << "\nCar Input" << endl;
	cout << string(9, '-') << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore(100, '\n');
	getline(cin, manufacturer);
	year = getInt("Enter the year built: ", 1, 9999);
	int doors = getInt("Enter the number of doors: ", 0, 99);
	
	Car carData(manufacturer, year, doors);
	cout << "\nCar Information" << endl;
	cout << string(16, '-') << endl;
	carData.displayInfo();

	cout << "\nTruck Input" << endl;
	cout << string(11, '-') << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore(100, '\n');
	getline(cin, manufacturer);
	year = getInt("Enter the year built: ", 1, 9999);
	int capacity = getInt("Enter the towing capacity: ", 0, 9999);

	Truck truckData(manufacturer, year, capacity);
	cout << "\nTruck Information" << endl;
	cout << string(18, '-') << endl;
	truckData.displayInfo();

	endProgram();
}

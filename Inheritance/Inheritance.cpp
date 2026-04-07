/*
Jaxon Finkelstein
4/7/26
CIS 1202 K01
V1.2
Inheritance
*/

#include "Car.h" //Car & Truck header files included, Vehicle is included in both of them
#include "Truck.h"

int main() {
	string manufacturer;
	cout << "Vehicle Input" << endl;
	cout << string(13, '-') << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer); //getline used for string input
	int year = getInt("Enter the year built: ", 1, 2100); //getInt from utilities library

	Vehicle vehicleData(manufacturer, year); //constructor called with manufacturer & year
	cout << "\nVehicle Information" << endl;
	cout << string(20, '-') << endl;
	vehicleData.displayInfo(); //manufacturer & year displayed

	cout << "\nCar Input" << endl;
	cout << string(9, '-') << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore(100, '\n');
	getline(cin, manufacturer);
	year = getInt("Enter the year built: ", 1, 2100);
	int doors = getInt("Enter the number of doors: ", 0, 9999); //used specifically for the Car class
	
	Car carData(manufacturer, year, doors); //constructor called with manufacturer, year, & doors
	cout << "\nCar Information" << endl;
	cout << string(16, '-') << endl;
	carData.displayInfo(); //manufacturer, year, & doors displayed

	cout << "\nTruck Input" << endl;
	cout << string(11, '-') << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore(100, '\n');
	getline(cin, manufacturer);
	year = getInt("Enter the year built: ", 1, 2100);
	int capacity = getInt("Enter the towing capacity: ", 0, 9999); //used specifically for the Truck class

	Truck truckData(manufacturer, year, capacity); //constructor called with manufacturer, year, & capacity
	cout << "\nTruck Information" << endl;
	cout << string(18, '-') << endl;
	truckData.displayInfo(); //manufacturer, year, & capacity displayed

	endProgram(); //endProgram from utilities library
}

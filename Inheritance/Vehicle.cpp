/*
File: Vehicle.cpp
Topic: Inheritance
*/

#include "Vehicle.h"

Vehicle::Vehicle(string m, int y) {
	setManufacturer(m);
	setYear(y);
}

void Vehicle::setManufacturer(string m) {
	manufacturer = m;
}

void Vehicle::setYear(int y) {
	year = y;
}

string Vehicle::getManufacturer() const {
	return manufacturer;
}

int Vehicle::getYear() const {
	return year;
}

void Vehicle::displayInfo() const {
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year built: " << getYear() << endl;
}

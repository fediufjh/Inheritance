/*
File: Vehicle.cpp
Topic: Inheritance
*/

#include "Vehicle.h" //Vehicle header file included

Vehicle::Vehicle(string m, int y) { //Vehicle:: must be used to relate functions to classes, string & int passed
	setManufacturer(m);
	setYear(y);
}

void Vehicle::setManufacturer(string m) { //sets user input equal to manufacturer
	manufacturer = m;
}

void Vehicle::setYear(int y) { //sets user input equal to year
	year = y;
}

string Vehicle::getManufacturer() const { //defined const due to no data being altered, returns the member variable "manufacturer"
	return manufacturer;
}

int Vehicle::getYear() const { //returns the member variable "year"
	return year;
}

void Vehicle::displayInfo() const { //displays the member variables included in Vehicle
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year built: " << getYear() << endl;
}

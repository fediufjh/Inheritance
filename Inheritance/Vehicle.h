/*
File: Vehicle.h
Topic: Inheritance
*/

#ifndef VEHICLE_H
#define VEHICLE_H

#include "UtilitiesFinkelstein.h"

class Vehicle {
private:
	string manufacturer;
	int year;
public:
	Vehicle(string, int);
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer() const;
	int getYear() const;
	void displayInfo() const;
};

#endif

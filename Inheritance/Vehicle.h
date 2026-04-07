/*
File: Vehicle.h
Topic: Inheritance
*/

#ifndef VEHICLE_H //ensures that the class cannot be defined more than once
#define VEHICLE_H

#include "UtilitiesFinkelstein.h" //personal utilities library included

class Vehicle { //used for both Car & Truck
private: //contains member variables
	string manufacturer;
	int year;
public: //contains member functions
	Vehicle(string, int); //Vehicle constructor
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer() const;
	int getYear() const;
	void displayInfo() const;
};

#endif

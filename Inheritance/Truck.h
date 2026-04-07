/*
File: Truck.h
Topic: Inheritance
*/

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h" //Vehicle header file included for inheritance & utilities library

class Truck : public Vehicle { //Truck class inherits Vehicle class with : public Vehicle
private: //contains member variables
	int capacity;
public: //contains member functions
	Truck(string, int, int); //Truck constructor
	void setCapacity(int);
	int getCapacity() const;
	void displayInfo() const;
};

#endif

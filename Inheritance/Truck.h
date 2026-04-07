/*
File: Truck.h
Topic: Inheritance
*/

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
	int capacity;
public:
	Truck(string, int, int);
	void displayInfo() const;
};

#endif

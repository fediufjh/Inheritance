/*
File: Truck.cpp
Topic: Inheritance
*/

#include "Truck.h"

Truck::Truck(string m, int y, int c) : Vehicle(m, y) {
	capacity = c;
}

void Truck::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Towing capacity: " << capacity << endl;
}

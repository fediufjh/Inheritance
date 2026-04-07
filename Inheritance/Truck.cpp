/*
File: Truck.cpp
Topic: Inheritance
*/

#include "Truck.h"

Truck::Truck(string m, int y, int c) : Vehicle(m, y) {
	setCapacity(c);
}

void Truck::setCapacity(int c) {
	capacity = c;
}

int Truck::getCapacity() const {
	return capacity;
}

void Truck::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Towing capacity: " << getCapacity() << endl;
}

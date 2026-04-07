/*
File: Truck.cpp
Topic: Inheritance
*/

#include "Truck.h" //Truck header file included

Truck::Truck(string m, int y, int c) : Vehicle(m, y) { //added onto the Vehicle constructor with : Vehicle, string & 2 ints passed
	setCapacity(c);
}

void Truck::setCapacity(int c) { //sets user input equal to capacity
	capacity = c;
}

int Truck::getCapacity() const { //returns the member variable "capacity"
	return capacity;
}

void Truck::displayInfo() const { //displays the member variables included in Truck as well as in Vehicle
	Vehicle::displayInfo();
	cout << "Towing capacity: " << getCapacity() << endl;
}

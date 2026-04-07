/*
File: Car.cpp
Topic: Inheritance
*/

#include "Car.h"

Car::Car(string m, int y, int d) : Vehicle(m, y) {
	setDoors(d);
}

void Car::setDoors(int d) {
	doors = d;
}

int Car::getDoors() const {
	return doors;
}

void Car::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Doors: " << getDoors() << endl;
}

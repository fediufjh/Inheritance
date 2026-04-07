/*
File: Car.cpp
Topic: Inheritance
*/

#include "Car.h"

Car::Car(string m, int y, int d) : Vehicle(m, y) {
	doors = d;
}

void Car::displayInfo() const {
	Vehicle::displayInfo();
	cout << "Doors: " << doors << endl;
}

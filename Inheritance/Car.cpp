/*
File: Car.cpp
Topic: Inheritance
*/

#include "Car.h" //Car header file included

Car::Car(string m, int y, int d) : Vehicle(m, y) { //added onto the Vehicle constructor with : Vehicle, string & 2 ints passed
	setDoors(d);
}

void Car::setDoors(int d) { //sets user input equal to doors
	doors = d;
}

int Car::getDoors() const { //returns the member variable "doors"
	return doors;
}

void Car::displayInfo() const { //displays the member variables included in Car as well as in Vehicle
	Vehicle::displayInfo();
	cout << "Doors: " << getDoors() << endl;
}

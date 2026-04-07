/*
File: Car.h
Topic: Inheritance
*/

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
	int doors;
public:
	Car(string, int, int);
	void setDoors(int);
	int getDoors() const;
	void displayInfo() const;
};

#endif

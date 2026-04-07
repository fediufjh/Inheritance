/*
File: Car.h
Topic: Inheritance
*/

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h" //Vehicle header file included for inheritance & utilities library

class Car : public Vehicle { //Car class inherits Vehicle class with : public Vehicle
private: //contains member variables
	int doors;
public: //contains member functions
	Car(string, int, int); //Car constructor
	void setDoors(int);
	int getDoors() const;
	void displayInfo() const;
};

#endif

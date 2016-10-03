#include "stdafx.h"

#include <iostream>
#include "VehicleClass.h"
#include "DriverClass.h"
using namespace std;

Vehicle::Driver::Driver(int ag, char nam[20]){
	Vehicle::Driver::age = ag;
	strcpy(Vehicle::Driver::name, nam);
	cout << "Nested class 'Driver' was created!!!" << endl;
}

void Vehicle::Driver::show(){
	cout << "Drivers name: " << this->name << endl;
	cout << "Drivers age: " << this->age << endl;
}

void Vehicle::Driver::changeWeight(Vehicle* A){
	A->weight += 200;
	cout << "Weight of extern class was changed (+200) from nested class";
}
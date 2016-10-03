#include "stdafx.h"

#include <iostream>
#include "VehicleClass.h"
#include "DriverClass.h"
using namespace std;




Vehicle::Vehicle(int we,int explu, int ag, char nam[20]): weight(we),expluatation(explu){
	man = new Driver(ag,nam);
	int i = 5;
	variable = &i;
	cout << "Vehicle class was created!!!" << endl;
}



bool Vehicle::checkage(Driver* A) const {                                    //const method
	return (A->age > 30);
}

void Vehicle::simplemethod(){
	cout << "Its a extremly simple method of basic class from " << classname<< " class"  << endl;
}
void Vehicle::setclassname(char buf[20]){
	strcpy(this->classname, buf);
}

void Vehicle::setw(int i){
	weight = i;
	cout << "Weight was changed!!!";

}

void Vehicle::toConsole(){
	cout << "Weight: " << weight << endl
		<< "Expluatation: " << expluatation << endl
		<< "Captan's age: " << this->man->age << endl
		<< "Captan's name: " << this->man->name << endl;
}


void Vehicle::constcast() const {                                            //const_cast mehod
	cout << "This method change variable from " << *variable;
	*const_cast<int*>(variable) = 10;
	cout << " to " << *variable << endl;
}















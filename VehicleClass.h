#include <iostream>

class Something{
protected:
	int weight;
public:
	virtual void simplemethod() = 0;
	virtual void toConsole() = 0;
};


class Vehicle:public Something {
protected:
	int weight;
	int expluatation;
	char classname[20];
	const int *variable;
public:
	Vehicle(int we,int explu,int ag,char nam[20]);
	
	
	class Driver;
	Driver *man;
	

	virtual void toConsole();
	virtual void setw(int);
	void simplemethod();
	void setclassname(char[20]);
	bool checkage(Driver*) const;   //check nested field
	void constcast() const;         //this method change const "variable"
	//~Vehicle();
};













class Car : protected Vehicle{                                   //new protected-derived class Car
public:
	int TestVariable;
	Car(int we, int explu, int ag, char nam[20], char *clname)
		:Vehicle(we, explu, ag, nam){
		printf("Car class was created!!!\n");
		setclassname(clname);
	}
	
	void showFunction(){
		printf("Weight was changed to 120\n");
		weight = 120;                                             //changing protected element...
	}
protected:
	int forinherclasses;
};

class Airplane : public Car {
public:
	Airplane(int we, int explu, int ag, char nam[20], char *clname)
		:Car(we,explu,ag,nam,clname){
		printf("Airplane class was created!!!\n");
		setclassname(clname);
	}
	const int passengers = 150;
	int payment;
	void showPassengers() const {
		printf("Number of passengers: " + passengers);
		//passengers = 23                            Mistake!!! Its a const method!!!
		//payment = 50;                              The same
	}
};







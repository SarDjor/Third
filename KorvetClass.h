//#include "VehicleClass.h"

class Korvet : public Vehicle {
public:
	Korvet(int we, int explu, int ag, char nam[20], char *clname)
		:Vehicle(we, explu, ag, nam){
		printf("Korvet class was created!!!\n");
		setclassname(clname);
	};
	void toConsole();
};

void Korvet::toConsole(){
	std::cout << "Method show() of derivated class Korvet: " << std::endl;
	Vehicle::toConsole();
}

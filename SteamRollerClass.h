//#include "VehicleClass.h"

class SteamRoller : public Vehicle {
public:
	SteamRoller(int we, int explu, int ag, char nam[20], char *clname)
		:Vehicle(we, explu, ag, nam){
		printf("SteamRoller class was created!!!\n");
		setclassname(clname);
	};
	void toConsole();
};

void SteamRoller::toConsole(){
	std::cout << "Method show() of derivated class SteamRoller: " << std::endl;
	Vehicle::toConsole();
}
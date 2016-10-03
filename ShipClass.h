class Ship : public Vehicle{
private:
	static int count;
public:
	Ship(int we, int explu, int ag, char nam[20], char clname[20])
		: Vehicle(we, explu, ag, nam){
		printf("Ship class was created!!!\n");
		setclassname(clname);
		count++;
	};
	Ship();
	~Ship(){ count--; }
	void toConsole();
	void showc();                                    //static field
};

int Ship::count = 0;
void Ship::toConsole(){
	std::cout << "Method show() of derivated class Ship: " << std::endl;
	Vehicle::toConsole();
}


void Ship::showc(){                                             //work with static field
	std::cout << "Number of Ships: " << count;
}


class Vehicle::Driver {
public:
	int age;
	char name[20];
	Driver(int, char[20]);
	~Driver();
	void show();
	void changeWeight(Vehicle*); // check parent field
};
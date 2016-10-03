extern class Curator;
extern class Inspector;
class WingShip : public Vehicle {
private:
	int k;
	char ch;
	bool b;
public:
	WingShip(int we, int explu, int ag, char nam[20], char *clname)
		:Vehicle(we, explu, ag, nam){
		printf("WingShip class was created!!!\n");
		setclassname(clname);
		k = 9;
		ch = 'c';
		b = true;
	};
	friend Inspector;
	friend Curator;
	//using Vehicle::weight;
	void toConsole();///!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
};

void WingShip::toConsole(){
	std::cout << "Method show() of derivated class WingShip: " << std::endl;
	Vehicle::toConsole();
}


class Inspector {
public:
	void IKnowAllAboutYou(WingShip* A){
		std::cout << A->k << ' '
			<< A->b << ' '
			<< A->ch << std::endl;
	}
};

class Curator{
public:
	void ICanModify(WingShip *A){
		A->k = 1;
		A->b = false;
		A->ch = 'b';
	}
};
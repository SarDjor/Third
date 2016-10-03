// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "VehicleClass.h"
#include "DriverClass.h"
#include "WingShipClass.h"
#include "KorvetClass.h"
#include "ShipClass.h"
#include "SteamRollerClass.h"
using namespace std;

class Print{
public:
	void IAmPrinting(Vehicle* A){
		cout << typeid(A).name() << endl;
		A->toConsole();
	}
};

Inspector Test;
Curator Test1;


int main(){
	Print print;
	Vehicle *BlackPerl = new Vehicle(500, 15, 32, "Jack Sparrow");
	
	BlackPerl->man->show();
	cout << endl << "-------------------------------------------------------------------------" << endl;
	
	Ship *NUL = new Ship(1,1,1,"asd","Ship");
	Ship *Avrora = new Ship(1000, 5, 25, "Kaptain","Ship");
	Avrora->simplemethod();
	print.IAmPrinting(Avrora);
	cout << "Captain is older than 30? " << Avrora->checkage(Avrora->man) << endl;
	Avrora->showc();
	delete Avrora;
	cout << endl << "After Avrora deleting: ";
	NUL->showc();
	cout << endl << "-------------------------------------------------------------------------" << endl;

	SteamRoller *Tank = new SteamRoller(2000, 2, 42, "Evgeniy","SteamRoller");
	Tank->simplemethod();
	print.IAmPrinting(Tank);
	//Tank->man->changeWeight(Tank);
	cout << endl;
	Tank->toConsole();
	cout << endl << endl << "-------------------------------------------------------------------------" << endl;

	WingShip *Moon = new WingShip(800, 300, 33, "Steve Hankock","WingShip");
	Moon->simplemethod();
	Moon->toConsole();
	Test.IKnowAllAboutYou(Moon);               //friend
	Test1.ICanModify(Moon);                           //classes
	Moon->toConsole();
	cout << endl << "-------------------------------------------------------------------------" << endl;

	Korvet *Beezy = new Korvet(3, 4, 19, "Pasha Kulich", "Korvet");
	Beezy->simplemethod();
	print.IAmPrinting(Beezy);
	cout << endl << "-------------------------------------------------------------------------" << endl;
	
	Vehicle *poly = new WingShip(1, 1, 1, "IIIyravlev", "Polyclass");
	poly->toConsole();
	poly->setw(3);
	print.IAmPrinting(poly);
	cout << endl << "-------------------------------------------------------------------------" << endl;

	Car *BMW = new Car(200, 1, 31, "Ivan", "Car");
	BMW->showFunction();               //calling showFunction!!!
	//cout << BMW->TestVariable;         // Mistake!!! TestVariable is now protected!!!
	//BMW->weight = 12;                Mistake!!! You have no right to call protected element out of class range!!!
	cout << endl << "-------------------------------------------------------------------------" << endl;

	Airplane *Ty111 = new Airplane(1500, 20, 45, "Milly", "Airplane");
	Ty111->TestVariable = 9;   //ok
	//Ty111->forinherclasses = 9 // Mistake!!! Weight is private
	cout << endl << "-------------------------------------------------------------------------" << endl;

	

	poly->constcast();                  //const_cast method!!!!
	
	
	Moon = static_cast<WingShip*>(BlackPerl);               //static_cast method
	Moon->man->show();

	Beezy = dynamic_cast<Korvet*>(BlackPerl);
	if (Beezy)
	Beezy->man->show();
	return 0;
}

#ifndef Frog_h
#define Frog_h
/**
 * @brief here we have the class Frog.
 * @details The class Frog has the int attribute for Distance Travelled"distanceT",
 * the int attribute for Quantity of jumps that the Frog did(quantity_jumps),
 * the string attribute for ID of the frog(id).
 * Has the method that is necessary to the race occurs"jump()",
 * and the constructor "Frogc(int i)" to instantiate the object and give him the id of "Frog"i"".
 *         			
 * e.g f1.Frogc(5), the object "f1" receive the id of "Frog5". 
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <ostream>

class Frog{
private:
	std::string id;
	int distanceT;
	int quantity_jumps;
public:
	static int distanceT_race;
	int getQuantity_jumps();
	int getDistanceT();
	std::string getId();
	void Frogc(int i);
	void jump();
	friend std::ostream& operator<< (std::ostream& o,Frog const f1);
};

void FrogRace(Frog& Frog1,Frog& Frog2,Frog& Frog3);

#endif
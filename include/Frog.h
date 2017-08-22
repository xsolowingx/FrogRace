#ifndef Frog_h
#define Frog_h

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>

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
};



int Frog::getQuantity_jumps(){
	return quantity_jumps;
}

int Frog::getDistanceT(){
	return distanceT;
}

std::string Frog::getId(){
	return id;
}

void Frog::jump(){
	distanceT += rand() % 30 +1;
	quantity_jumps += 1;
}

void Frog::Frogc(int i){
	std::ostringstream convert;
	convert << i;
	quantity_jumps = 0;
	distanceT = 0;
	id ="Frog" + convert.str();

}

#endif
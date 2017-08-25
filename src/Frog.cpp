/**@file Frog.cpp
 *@brief file where has the implementation of the methods of the class Frog.
 *@since 08/24/2017
 *@date 08/24/2017
 *@author Matheus de Jesus
 */
#include "../include/Frog.h"

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

std::ostream& operator<< (std::ostream& o,Frog const F1){/*!<Here we have the overload of the operator of extraction <<.*/
	o <<"The "<<F1.id<<" went through "<<F1.distanceT<<"cm in "<<F1.quantity_jumps<<" jumps";
	return o;
}
/**@brief main file of the program.
 *@since 08/22/2017
 *@details The distance unit will be cm, with the max range of jump that a frog can jump, is 40cm;
 *@date 08/22/2017
 *@author Matheus de Jesus
 */
#include "../include/Frog.h"

int Frog::distanceT_race = 1000;

int main(){
	srand (time(NULL));
	char option;
	Frog Frog1,Frog2,Frog3;
	Frog1.Frogc(1);
	Frog2.Frogc(2);
	Frog3.Frogc(3);
	std::cout<<"Welcome to the frog race game, type 'y' to start the game  or 'n' to exit the game."<<std::endl;
	std::cin>>option;
	std::cout<<"The "<<Frog1.getId()<<" went through "<<Frog1.getDistanceT()<<"cm in "<<Frog1.getQuantity_jumps()<<" jumps"<<std::endl;
	std::cout<<"The "<<Frog2.getId()<<" went through "<<Frog2.getDistanceT()<<"cm in "<<Frog2.getQuantity_jumps()<<" jumps"<<std::endl;
	std::cout<<"The "<<Frog3.getId()<<" went through "<<Frog3.getDistanceT()<<"cm in "<<Frog3.getQuantity_jumps()<<" jumps"<<std::endl;
	return 0;
}
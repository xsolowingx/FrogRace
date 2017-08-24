/**@file main.cpp
 *@brief file where run the program.
 *@since 08/22/2017
 *@details The distance unit will be cm, with the max range of jump that a frog can jump, is 40cm;
 *@date 08/23/2017
 *@author Matheus de Jesus
 */
#include "../include/Frog.h"

int Frog::distanceT_race = 10000;

int main(){
	srand (time(NULL));
	std::string option;
	Frog Frog1,Frog2,Frog3;
	Frog1.Frogc(1);
	Frog2.Frogc(2);
	Frog3.Frogc(3);
	std::cout<<"Welcome to the frog race game, type 'y' to start the game  or 'n' to exit the game."<<std::endl<<std::endl;
	while(std::getline(std::cin,option)){/*!<Loop necessary to ensure that the program will only run if the user 
	                                      *type "y" or will stop if he type "n".*/
		if(option == "n"){
			std::cout<<"quiting..."<<std::endl;
			return 0;
		}
		if(option == "y"){
			break;
		}
		std::cout<<"Invalid option, please type 'y' to start the game or 'n' to exit the game."<<std::endl;
	}
	FrogRace(Frog1,Frog2,Frog3);
	return 0;
}
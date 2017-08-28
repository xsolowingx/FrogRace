/**@file race.cpp
 *@brief file where occurs the "race".
 *@since 08/23/2017
 *@date 08/28/2017
 *@author Matheus de Jesus
 */
#include "../include/Frog.h"

void FrogRace(Frog* Frog1,int const quantity){
	int i;

	for(i = 0;i < quantity;i++){

		Frog1[i].Frogc(i+1);/*!<Set the id of Frog1[i] to Frog"i+1" and set the quantity_jumps & distanceT to 0.*/		
	}
	
	while(Frog1[i].getDistanceT() <= Frog::distanceT_race){/*!<Make the "race" occurs.*/

		for(i = 0;i < quantity;i++){/*!<Make every frog jump.*/

			Frog1[i].jump();

			if(Frog1[i].getDistanceT() >= Frog::distanceT_race){

				std::cout<<"The "<<Frog1[i].getId()<<" was the winner!!!"<<std::endl<<std::endl;
				break;
			}
		}
	}	
	for(i = 0;i < quantity;i++){/*!<Show to the user how many cm  the Frog[i] went through  with "n" jumps.*/

		std::cout<<Frog1[i]<<std::endl;
	}

}

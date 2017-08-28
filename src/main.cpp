/**@file main.cpp
 *@brief "main" file of the program.
 *@since 08/22/2017
 *@details The distance unit will be cm, with the max range of jump that a frog can jump, is 40cm;
 *@date 08/28/2017
 *@author Matheus de Jesus
 */
#include "../include/Frog.h"

int Frog::distanceT_race = 10000;

int main(){
	
	srand (time(NULL));/*!<Function which ensures that rand() will generate a "true" random number every time.*/
	
	std::string option,line;
	int quantity = 3;
	int function_return;/*!<variable necessary to stop the function main if the user type "n" to quit.*/

	start(option,line,quantity,function_return);
	if(function_return == -1){
		return -1;
	}

    Frog *Frog1 = new Frog[quantity];
    
	FrogRace(Frog1,quantity);/*!<Function where all the "race" occurs.*/

    delete[] Frog1;

	return 0;
}
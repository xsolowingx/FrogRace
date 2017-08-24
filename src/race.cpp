#include "../include/Frog.h"

void FrogRace(Frog Frog1,Frog Frog2,Frog Frog3){


	while((Frog1.getDistanceT() < Frog::distanceT_race) && 
		(Frog2.getDistanceT() < Frog::distanceT_race) && 
		(Frog3.getDistanceT() < Frog::distanceT_race) ){/*!<Verify if any of the 3 frogs has crossed the line.*/
		Frog1.jump();

		if(Frog1.getDistanceT() >= Frog::distanceT_race){/*!<Verify if Frog1 has crossed the line.*/
			std::cout<<"The "<<Frog1.getId()<<" was the winner!!!"<<std::endl<<std::endl;
			break;
		}

		Frog2.jump();

		if(Frog2.getDistanceT() >= Frog::distanceT_race){/*!<Verify if Frog2 has crossed the line.*/
			std::cout<<"The "<<Frog2.getId()<<" was the winner!!!"<<std::endl<<std::endl;
			break;
		}

		Frog3.jump();

		if(Frog3.getDistanceT() >= Frog::distanceT_race){/*!<Verify if Frog3 has crossed the line.*/
			std::cout<<"The "<<Frog3.getId()<<" was the winner!!!"<<std::endl<<std::endl;
			break;
		}
	}
	std::cout<<"The "<<Frog1.getId()<<" went through "<<Frog1.getDistanceT()<<"cm in "<<Frog1.getQuantity_jumps()<<" jumps"<<std::endl;
	std::cout<<"The "<<Frog2.getId()<<" went through "<<Frog2.getDistanceT()<<"cm in "<<Frog2.getQuantity_jumps()<<" jumps"<<std::endl;
	std::cout<<"The "<<Frog3.getId()<<" went through "<<Frog3.getDistanceT()<<"cm in "<<Frog3.getQuantity_jumps()<<" jumps"<<std::endl;
}
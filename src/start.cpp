/**@file start.cpp
 *@brief file where asks the inputs to the user.
 *@since 08/23/2017
 *@date 08/28/2017
 *@author Matheus de Jesus
 */
#include "../include/Frog.h"

void start(std::string& option, std::string& line, int& quantity,int& function_return){
	std::cout<<"Welcome to the frog race game, type 'y' to start the game  or 'n' to exit the game."<<std::endl<<std::endl;
	
	while(std::getline(std::cin,option)){/*!<Loop necessary to ensure that the program will only run if the user 
	                                      *type "y" or will stop if he type "n".*/
		if(option == "n"){
			std::cout<<"quiting..."<<std::endl;
			function_return = -1;
			return ;
		}
		if(option == "y"){
			break;
		}
		std::cout<<"Invalid option, please type 'y' to start the game or 'n' to exit the game."<<std::endl;
	}
	
	std::cout<<"Do you want to set the amount of frogs? type 'y' to set the amount and 'n' to use the default valor (3): "<<std::endl;
	
	while(std::getline(std::cin,option)){/*!<Loop necessary to ensure that the user will set the amount
	                                      *of frogs if he type "y" or will use the default valor (3) .*/
		if(option == "n"){
			break;			
		}

		if(option == "y"){

			std::cout<<"Please type the amount of frogs: "<<std::endl<<std::endl;

			while (std::getline(std::cin, line)){ /*!<Repeat the reading of the line*/ 
	        
	        std::stringstream ss(line); /*!<Create a stringstream with the content of the "line"*/ 
	        
	        if ((ss >> quantity) && ss.eof()){
	            
	        	/*!< Try to extract a integer from the stringstream
	            *If he suceed to extract and has left nothing...
	            *Get out of the loop.*/
	            break;
	        }
	        std::cout << std::endl << "[ERROR] Invalid input! " << std::endl << std::endl;
	        std::cout << "Please type a integer number: "<<std::endl<<std::endl;
	    }
	    
	    std::cout << std::endl << "[OK] Valid input: " << quantity << std::endl<< std::endl;
			break;
		}

		std::cout<<"Invalid option, please type 'y' to set the amount of frogs or 'n' to use the default valor (3)."<<std::endl<<std::endl;
	}
} 


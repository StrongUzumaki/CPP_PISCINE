#include "Karen.hpp"

void	Karen::debug(){

	std::cout 
		<<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
		<< std::endl;
}

void	Karen::info(){

	std::cout 
		<< 	"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;

}

void	Karen::warning(){

	std::cout 
		<< "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
		<< std::endl;

}

void	Karen::error(){

	std::cout 
		<< "This is unacceptable, I want to speak to the manager now."
		<< std::endl;

}

int Karen::calclevel(std::string level){
	
	int i;
 	i = ((level == (std::string)"DEBUG") * 1 
			+ (level == (std::string)"INFO") * 2
				+ (level == (std::string)"WARNING") * 3
					+ ( level == (std::string)"ERROR") * 4);
	return (i);
}

void	Karen::complain( std::string level ){

	int i;

	this->levels[0] = &Karen::debug; 
	this->levels[1] = &Karen::info; 
	this->levels[2] = &Karen::warning; 
	this->levels[3] = &Karen::error; 
	

	i = calclevel(level);	
	switch(i)
	{
		case 0:
			std::cout << " Probably complaining about insignificant problems" << std::endl;
			break;
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*levels[0])();
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			(this->*levels[1])();
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*levels[2])();
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*levels[3])();
	}
}

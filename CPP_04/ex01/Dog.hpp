#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal{
	
	public:
		Dog();		
		~Dog();
		virtual void makeSound() const;		
	private:
		Brain*	brain;
};

#endif
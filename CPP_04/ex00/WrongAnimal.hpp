#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal & src);
		virtual ~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal & src);
		void 	makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
};

#endif


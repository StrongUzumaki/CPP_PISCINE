# include "Zombie.hpp"

Zombie::~Zombie (void)
{
	std::cout << this->name << " destroyed" << std::endl;
}

Zombie::Zombie( std::string name)
{
	this->name = name;
}

void	Zombie::announce ( void ) {

	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


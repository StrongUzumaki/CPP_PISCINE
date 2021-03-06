#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

	public:
		ClapTrap(ClapTrap const &src);
		explicit ClapTrap(std::string name);
		ClapTrap & operator=(const ClapTrap& src);
		virtual ~ClapTrap();
		int attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


	protected:
		std::string	_Name;
		unsigned int	_Hitpoints;
		int			_Energy_points;
		int			_Attack_damage;
		ClapTrap(std::string Name, int Hitpoints, int Energy_points, int Attack_damage);
};


#endif

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define RED "\033[0;31m"
#define NONE "\033[0m"


class ScavTrap: public ClapTrap
{
	private:
		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap &Scavtrap);
		~ScavTrap();
		
		void guardGate();
		void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
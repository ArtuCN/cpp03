#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap &Scavtrap);
		~ScavTrap();

		void guardGate();
		void hightFive(void);
};

#endif
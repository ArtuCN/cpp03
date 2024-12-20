#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define RED "\033[0;31m"
#define NONE "\033[0m"


class ScavTrap: virtual public ClapTrap
{
	private:
		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&st);
		ScavTrap &operator=(const ScavTrap &sv);
		~ScavTrap();
		
		void guardGate();
		void attack(std::string const & target);
};

#endif
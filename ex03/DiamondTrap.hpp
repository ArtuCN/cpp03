#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include <iostream>


class DiamondTrap: virtual public FragTrap, ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap &operator=(const DiamondTrap &DiamondTrap);
		~DiamondTrap();
};


#endif
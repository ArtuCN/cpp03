#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include <iostream>


class DiamondTrap: virtual public FragTrap, ScavTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap &operator=(const DiamondTrap &DiamondTrap);
		~DiamondTrap();
};


#endif
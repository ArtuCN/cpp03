#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("ClapDefault"), _name("Default") {
	this->_attackDamage = FragTrap::getDamage();
	this->_energyPoints = ScavTrap::getEnergyPoints();
    this->_hitPoints = FragTrap::getHitPoints();
	std::cout << "DiamondTrap default constructor called\n";
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "ClapDefault"), _name(name) {
	this->_attackDamage = FragTrap::getDamage();
	this->_energyPoints = ScavTrap::getEnergyPoints();
    this->_hitPoints = FragTrap::getHitPoints();
	std::cout << "DiamondTrap constructor with name called\n";
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &DiamondTrap) {
    std::cout << "DiamondTrap assignment operator called\n";
    if (this != &DiamondTrap) {
        DiamondTrap::operator=(DiamondTrap);
    }
    return *this;
}

DiamondTrap:: ~DiamondTrap()
{
	std::cout<<"Diamond destructor called\n";
}
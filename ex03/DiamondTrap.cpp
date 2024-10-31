#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("ClapDefault"), ScavTrap(), FragTrap(), _name("Default") {
	FragTrap::getDamage();
	ScavTrap::getEnergyPoints();
    FragTrap::getHitPoints();
	std::cout << "DiamondTrap default constructor called\n";
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "ClapDefault"), ScavTrap(name), FragTrap(name),_name(name) {
	FragTrap::setDamage();
	ScavTrap::setEnergyPoints();
    FragTrap::setHitPoints();
	std::cout << "DiamondTrap constructor with name called\n";
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dt) {
    std::cout << "DiamondTrap assignment operator called\n";
    (void)dt;
	return *this;
}

DiamondTrap:: ~DiamondTrap()
{
	std::cout<<"Diamond destructor called\n";
}
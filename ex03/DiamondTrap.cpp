#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), _name(){
    std::cout << "DiamondTrap default constructor called\n";
	this->_attackDamage = this->FragTrap::getDamage();
	this->_energyPoints = this->ScavTrap::getEnergyPoints();
    this->_hitPoints = this->FragTrap::getHitPoints();
	std::cout << "DiamondTrap default constructor called\n";
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "ClapDefault"), _name(name){
	this->_attackDamage = this->FragTrap::getDamage();
	this->_energyPoints = this->ScavTrap::getEnergyPoints();
    this->_hitPoints = this->FragTrap::getHitPoints();
	std::cout << "DiamondTrap constructor with name called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap) : ClapTrap(DiamondTrap), FragTrap(DiamondTrap), ScavTrap(DiamondTrap) {
    std::cout << "DiamondTrap copy constructor called\n";
    *this = DiamondTrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &DiamondTrap) {
    std::cout << "DiamondTrap assignment operator called\n";
    if (this != &DiamondTrap) {
        this->_name = DiamondTrap._name;
        this->_attackDamage = DiamondTrap._attackDamage;
        this->_energyPoints = DiamondTrap._energyPoints;
        this->_hitPoints = DiamondTrap._hitPoints;
        ClapTrap::operator=(DiamondTrap);
    }
    return *this;
}

DiamondTrap:: ~DiamondTrap()
{
	std::cout<<"Diamond destructor called\n";
}
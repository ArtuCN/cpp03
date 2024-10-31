#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap("default", 100, 50, 20) {
	std::cout<<"ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name, unsigned int hitpoints, unsigned int energypoints, unsigned int attackdamage) : ClapTrap(name, hitpoints, energypoints, attackdamage){
    std::cout<<"Constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout<<"ScavTrap constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap) {
    std::cout << "ScavTrap assignment operator called\n";
    if (this != &ScavTrap) {
        ClapTrap::operator=(ScavTrap);
    }
    return *this;
}


ScavTrap:: ~ScavTrap(){
	std::cout<<"ScavTrap Destructor called\n";
}

void ScavTrap:: guardGate()
{
    if (this->getHitPoints() == 0)
        std::cout<< this->getName( ) << " is dead so cannot go in Gate keeper mode!\n";
    else
	    std::cout << this->getName() <<" is now in Gate keeper mode!" << std::endl;
}

void ScavTrap:: attack(std::string const & target)
{
    if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0)
    {
        std::cout<< this->getName() << " cannot attack!\n";
        return ;
    }
    std::cout<< this->getName() << " attacks " << target << " causing " << this->getDamage() << "\n";
    this->_energyPoints = this->_energyPoints - 1;
}

void ScavTrap:: beRepaired(unsigned int amount)
{
    if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0)
    {
        std::cout<< this->getName() << " cannot be repaired!\n";
        return ;
    }
    std::cout<< this->getName() << " is repairing itself by " << amount << " hitPoints!\n";
    this->_energyPoints = this->_energyPoints - 1;
    this->_hitpoints += amount;
}

void ScavTrap:: takeDamage(unsigned int amount)
{
    if (this->getHitPoints() == 0)
    {
        std::cout<< this->getName() << " is already dead!\n";
        return ;
    }
    std::cout<< this->getName() << " is taking " << amount << " of damage!\n";
    if (amount >= this->getHitPoints())
    {
        this->_hitpoints = 0;
        std::cout << this->getName() << " is dead!\n";
        return ;
    }
    this->_hitpoints -= amount;
}
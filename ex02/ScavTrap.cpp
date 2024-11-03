#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap() {
	std::cout<<"ScavTrap default constructor called\n";
    ScavTrap::setHitpoints(100);
    ScavTrap::setEnergyPoints(50);
    ScavTrap::setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout<<"ScavTrap constructor called\n";
    ScavTrap::setHitpoints(100);
    ScavTrap::setEnergyPoints(50);
    ScavTrap::setAttackDamage(20);
}

ScavTrap &ScavTrap::operator=(const ScavTrap &sv) {
    std::cout << "ScavTrap assignment operator called\n";
    if (this != &sv) {
        ClapTrap::operator=(sv);
    }
    return *this;
}


ScavTrap:: ~ScavTrap(){
	std::cout<<"ScavTrap Destructor called\n";
}

void ScavTrap:: guardGate()
{
    if (this->getHitpoints() == 0)
        std::cout<< this->getName( ) << " is dead so cannot go in Gate keeper mode!\n";
    else
	    std::cout << this->getName() <<" is now in Gate keeper mode!" << std::endl;
}

void ScavTrap:: attack(std::string const & target)
{
    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0)
    {
        std::cout<< this->getName() << " cannot attack!\n";
        return ;
    }
    std::cout<< this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << "\n";
    this->_energyPoints = this->_energyPoints - 1;
}
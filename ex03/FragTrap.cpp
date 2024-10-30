#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default", 100, 100, 30) {
	std::cout<<"FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout<<"FragTrap constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &FragTrap) {
    std::cout << "FragTrap assignment operator called\n";
    if (this != &FragTrap) {
        ClapTrap::operator=(FragTrap);
    }
    return *this;
}

FragTrap:: ~FragTrap(){
	std::cout<<"FragTrap Destructor called\n";
}

void FragTrap:: guardGate()
{
    if (this->getHitPoints() == 0)
        std::cout<< this->getName( ) << " is dead so can't go in Gate keeper mode!\n";
    else
	    std::cout << this->getName() <<" entered in Gate keeper mode!" << std::endl;
}

void FragTrap:: attack(std::string const & target)
{
    if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0)
    {
        std::cout<< this->getName() << " can't attack!\n";
        return ;
    }
    std::cout<< this->getName() << " attacks " << target << " causing " << this->getDamage() << "\n";
    this->_energyPoints = this->_energyPoints - 1;
}

void FragTrap:: beRepaired(unsigned int amount)
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

void FragTrap:: takeDamage(unsigned int amount)
{
    if (this->getHitPoints() == 0)
    {
        std::cout<< this->getName() << " is already dead!\n";
        return ;
    }
    std::cout<< this->getName() << " is taking " << amount << " of damage\n";
    if (amount >= this->getHitPoints())
    {
        this->_hitpoints = 0;
        std::cout << this->getName() << " is dead\n";
        return ;
    }
    this->_hitpoints -= amount;
}

void FragTrap:: hightFive()
{
    if (this->getHitPoints() == 0)
        std::cout<< this->getName() << " cannot hight five because is dead!\n";
    else
        std::cout<< this->getName() << " says hightfive\n";
}

unsigned int FragTrap:: getDamage()
{
    return this->_attackDamage;
}

unsigned int FragTrap:: getHitPoints()
{
    return this->_hitpoints;
}

unsigned int FragTrap:: getEnergyPoints()
{
    return this->_energyPoints;
}
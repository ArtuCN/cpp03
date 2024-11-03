#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout<<"FragTrap default constructor called\n";
    this->setHitpoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout<<"FragTrap constructor called\n";
    this->setHitpoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap &FragTrap::operator=(const FragTrap &ft) {
    std::cout << "FragTrap assignment operator called\n";
    if (this != &ft) {
        ClapTrap::operator=(ft);
    }
    return *this;
}

FragTrap:: ~FragTrap(){
	std::cout<<"FragTrap Destructor called\n";
}

void FragTrap:: attack(std::string const & target)
{
    if (this->getHitpoints() == 0 || this->getEnergyPoints() == 0)
    {
        std::cout<< this->getName() << " can't attack!\n";
        return ;
    }
    std::cout<< this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << "\n";
    this->_energyPoints = this->_energyPoints - 1;
}


void FragTrap:: hightFive()
{
    if (this->getHitpoints() == 0)
        std::cout<< this->getName() << " cannot hight five because is dead!\n";
    else
        std::cout<< this->getName() << " says hightfive\n";
}
#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap("default", 100, 100, 30) {
	std::cout<<"ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
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
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}

void ScavTrap:: hightFive(void)
{
    if (getHitPoints() == 0)
        return ;
    std::cout << getName() << " says hight five!\n";
}

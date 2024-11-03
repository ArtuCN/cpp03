#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name("Default") {
	_attackDamage = FragTrap::getAttackDamage();
	_energyPoints = ScavTrap::getEnergyPoints();
	_hitpoints = FragTrap::getHitpoints();
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name) {
	_attackDamage = FragTrap::getAttackDamage();
	_energyPoints = ScavTrap::getEnergyPoints();
	_hitpoints = FragTrap::getHitpoints();
	std::cout << "DiamondTrap constructor with name called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt) : ClapTrap(dt), ScavTrap(dt), FragTrap(dt), _name(dt._name) {
	_attackDamage = dt._attackDamage;
	_energyPoints = dt._energyPoints;
	_hitpoints = dt._hitpoints;
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &dt) {
	std::cout << "DiamondTrap assignment operator called\n";
	if (this != &dt) {
		ClapTrap::operator=(dt);
		ScavTrap::operator=(dt);
		FragTrap::operator=(dt);
		_name = dt._name;
		_attackDamage = dt._attackDamage;
		_energyPoints = dt._energyPoints;
		_hitpoints = dt._hitpoints;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond destructor called\n";
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
	FragTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
	ClapTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

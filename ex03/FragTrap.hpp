#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"


class FragTrap: virtual public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap &Scavtrap);
		~FragTrap();
		
		void guardGate();
		void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);


		unsigned int getDamage();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();
		void hightFive();
};


#endif
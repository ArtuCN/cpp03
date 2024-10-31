#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"


class FragTrap: public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap &ft);
		~FragTrap();
		
		void guardGate();
		void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

		void hightFive();
};


#endif
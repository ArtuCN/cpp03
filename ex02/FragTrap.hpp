#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"


class FragTrap: public ClapTrap
{
	private:
		
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &ft);
		FragTrap &operator=(const FragTrap &ft);
		~FragTrap();
		
		void attack(std::string const & target);

		void hightFive();
};


#endif
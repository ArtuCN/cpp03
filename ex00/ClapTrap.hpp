/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:26:59 by artucn            #+#    #+#             */
/*   Updated: 2024/10/26 14:51:10 by artucn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hitpoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &ClapTrap);
        ClapTrap &operator=(const ClapTrap &ClapTrap);
        ~ClapTrap();

        std::string getName();    
};


#endif
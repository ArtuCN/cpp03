/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:26:59 by artucn            #+#    #+#             */
/*   Updated: 2024/10/30 11:39:05 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hitpoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        unsigned int getHitPoints();
        unsigned int getDamage();
        unsigned int getEnergyPoints();


        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int hitpoints, unsigned int energypoints, unsigned int attackdamage);
        ClapTrap(const ClapTrap &ClapTrap);
        ClapTrap &operator=(const ClapTrap &ClapTrap);
        ~ClapTrap();

        std::string getName();    
};


#endif
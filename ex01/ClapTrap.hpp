/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:26:59 by artucn            #+#    #+#             */
/*   Updated: 2024/11/03 11:59:48 by artucn           ###   ########.fr       */
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

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &ct);
        ClapTrap &operator=(const ClapTrap &ct);
        ~ClapTrap();

        std::string getName();
        unsigned int getHitpoints();
        unsigned int getEnergyPoints();
        unsigned int getAttackDamage();

        void setName(std::string name);
        void setHitpoints(unsigned int hitpoints);
        void setEnergyPoints(unsigned int energyPoints);
        void setAttackDamage(unsigned int attackDamage);
};


#endif
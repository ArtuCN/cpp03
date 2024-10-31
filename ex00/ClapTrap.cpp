/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:30:42 by artucn            #+#    #+#             */
/*   Updated: 2024/10/31 16:34:31 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap is created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
    std::cout << "ClapTrap " << _name << " is copied to " << ct._name << std::endl;
    *this = ct;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
    std::cout << "ClapTrap " << _name << " is assigned to " << ct._name << std::endl;
    _name = ct._name;
    _hitpoints = ct._hitpoints;
    _energyPoints = ct._energyPoints;
    _attackDamage = ct._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

std::string ClapTrap::getName()
{
    return _name;
}

void ClapTrap::attack(std::string const & target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    if (this->_hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of hitpoints!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    if (this->_hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of hitpoints!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " take " << amount << " points of damage!" << std::endl;
    if (this->_hitpoints < amount)
    {   
        this->_hitpoints = 0;
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
    }
    else
        this->_hitpoints -= amount;  
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return ;
    }
    if (this->_hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is out of hitpoints!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " be repaired " << amount << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
}


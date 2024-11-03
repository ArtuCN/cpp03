/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:30:42 by artucn            #+#    #+#             */
/*   Updated: 2024/11/03 11:53:57 by artucn           ###   ########.fr       */
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
    if (this->_hitpoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
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
    this->_hitpoints += amount;
}


// GET AND SET

std::string ClapTrap::getName()
{
    return _name;
}

unsigned int ClapTrap::getHitpoints()
{
    return _hitpoints;
}

unsigned int ClapTrap::getEnergyPoints()
{
    return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage()
{
    return _attackDamage;
}

void ClapTrap::setName(std::string name)
{
    _name = name;
}

void ClapTrap::setHitpoints(unsigned int hitpoints)
{
    _hitpoints = hitpoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
    _energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    _attackDamage = attackDamage;
}
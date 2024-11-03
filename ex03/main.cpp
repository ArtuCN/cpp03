/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:38:21 by artucn            #+#    #+#             */
/*   Updated: 2024/11/03 12:54:21 by artucn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d1("Ayeye");
    DiamondTrap d2("Brazorf");

    d2.whoAmI();
    
    d1.attack("Brazorf");
    d2.takeDamage(d1.getAttackDamage());
    d2.ScavTrap::guardGate();
    d1.FragTrap::hightFive();
    return (0);
}

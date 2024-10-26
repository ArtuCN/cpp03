/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:38:21 by artucn            #+#    #+#             */
/*   Updated: 2024/10/26 14:47:41 by artucn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("enemy");
    ClapTrap claptrap2(claptrap);
    ClapTrap claptrap3 = claptrap;

    claptrap.attack("enemy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    claptrap2.attack("enemy");
    claptrap2.takeDamage(10);
    claptrap2.beRepaired(3);

    claptrap3.attack("enemy");
    claptrap3.takeDamage(5);
    claptrap3.beRepaired(3);

    return 0;
}
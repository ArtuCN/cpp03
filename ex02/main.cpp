/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:38:21 by artucn            #+#    #+#             */
/*   Updated: 2024/11/03 12:16:12 by artucn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap scav1("Super Evil");
    scav1.setAttackDamage(100);
    ScavTrap scav2("Neutral");
    
    scav2.guardGate();
    std::cout << scav2.getName() << " has " << scav2.getHitpoints() << " hit points." << std::endl;

    std::cout << std::endl;

    std::cout << "ScavTrap " << scav1.getName() << " attacks " << scav2.getName() << "!" << std::endl;
    scav1.attack(scav2.getName());
    scav2.takeDamage(scav1.getAttackDamage());

    
    std::cout << std::endl;
    std::cout << scav1.getName() << " has " << scav1.getHitpoints() << " hit points left." << std::endl;
    std::cout << scav2.getName() << " has " << scav2.getHitpoints() << " hit points left." << std::endl;
    

    std::cout <<RED<< "\n\tSECOND SCENARIO\n\n" <<NONE;

    FragTrap st("Friendly");

    st.hightFive();

    scav1.attack(st.getName());
    st.takeDamage(scav1.getAttackDamage());
    scav1.attack(st.getName());
    st.takeDamage(scav1.getAttackDamage());

    st.hightFive();

    std::cout<<RED<<"\n\tEND SCENARIOS\n\n"<<NONE;
    return (0);
}

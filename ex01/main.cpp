/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artucn <artucn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:38:21 by artucn            #+#    #+#             */
/*   Updated: 2024/11/03 12:04:44 by artucn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1("Attacker");
    ScavTrap scav2("Defender");
    
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

    ScavTrap st("Evil");
    ClapTrap ct("Good");
    

    ct.attack(st.getName());
    st.takeDamage(ct.getAttackDamage());
    
    st.beRepaired(10);


    ct.attack(st.getName());
    st.takeDamage(ct.getAttackDamage());
    
    st.attack(ct.getName());
    ct.takeDamage(st.getAttackDamage());
    
    ct.attack(st.getName());
    st.takeDamage(ct.getAttackDamage());
    
    st.guardGate();

    std::cout<<RED<<"\n\tEND SCENARIOS\n\n"<<NONE;
    
    
    
    return (0);
}

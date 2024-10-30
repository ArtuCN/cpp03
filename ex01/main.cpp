/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aconti <aconti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:38:21 by artucn            #+#    #+#             */
/*   Updated: 2024/10/30 11:59:55 by aconti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1("Attacker");
    ScavTrap scav2("Defender");
    
    scav2.guardGate();
    std::cout << scav2.getName() << " has " << scav2.getHitPoints() << " hit points." << std::endl;

    std::cout << std::endl;

    std::cout << "ScavTrap " << scav1.getName() << " attacks " << scav2.getName() << "!" << std::endl;
    scav1.attack(scav2.getName());
    scav2.takeDamage(scav1.getDamage());

    
    std::cout << std::endl;
    std::cout << scav1.getName() << " has " << scav1.getHitPoints() << " hit points left." << std::endl;
    std::cout << scav2.getName() << " has " << scav2.getHitPoints() << " hit points left." << std::endl;
    

    std::cout <<RED<< "\n\tSECOND SCENARIO\n\n" <<NONE;

    ScavTrap st("Evil");
    ClapTrap ct("Good", 100, 100, 50);
    

    ct.attack(st.getName());
    st.takeDamage(ct.getDamage());
    
    st.beRepaired(10);


    ct.attack(st.getName());
    st.takeDamage(ct.getDamage());
    
    st.attack(ct.getName());
    ct.takeDamage(st.getDamage());
    
    ct.attack(st.getName());
    st.takeDamage(ct.getDamage());
    
    st.guardGate();

    std::cout<<RED<<"\n\tEND SCENARIOS\n\n"<<NONE;
    
    
    
    return (0);
}

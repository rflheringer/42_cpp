/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:38:15 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/07 10:56:29 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ClapTrap.hpp"

int main (){
    
    ClapTrap a("ClapTrap");
    ClapTrap b("CL4P-TP");

    std::cout << std::endl;

    a.setAttackDamage(3);
    a.setAttackDamage(-3);
    b.setAttackDamage(2);

    std::cout << std::endl;

    a.attack("CL4P-TP");
    a.takeDamage(-9);
    b.takeDamage(a.getAttackDamage());
    b.attack("ClapTrap");
    a.takeDamage(b.getAttackDamage());
    a.attack("CL4P-TP");
    b.takeDamage(a.getAttackDamage());
    a.attack("CL4P-TP");
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(1);
    b.beRepaired(-1);
    a.attack("CL4P-TP");
    b.takeDamage(a.getAttackDamage());
    b.attack("ClapTrap");
    b.beRepaired(8);
    a.attack("CL4P-TP");
    b.takeDamage(a.getAttackDamage());
    a.beRepaired(2);
    a.beRepaired(2);
    a.beRepaired(2);
    a.beRepaired(2);
    a.beRepaired(2);
    a.beRepaired(2);
    a.beRepaired(2);
    a.attack("CL4P-TP");
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(5);

    std::cout << std::endl;

    return 0;
}
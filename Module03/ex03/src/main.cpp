/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:38:15 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/17 14:11:17 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"

int main() {
	ClapTrap a("CLAP-TP");
	ClapTrap b("CL4P-TP");

	std::cout << std::endl;

	ScavTrap s("Scav");
	FragTrap f("teste");
	FragTrap f2("Frag");

	f = f2;

	s.attack("CL4P-TP");
	f.attack("CL4P-TP");
	b.takeDamage(f.getAttackDamage());
	f.takeDamage(30);
	f.takeDamage(-1);
	f.highFivesGuys();
	f.beRepaired(5);
	b.beRepaired(5);
	f.takeDamage(180);
	f.attack("CLAP-TP");
	s.beRepaired(7);

	DiamondTrap d("dynamo");

	ClapTrap* ptr = new DiamondTrap(d);
	FragTrap* fragPtr = new FragTrap(d);
	ScavTrap* scavPtr = new ScavTrap(d);

	ptr->attack("CLAP-TP");
	fragPtr->attack("CLAP-TP");
	scavPtr->attack("CLAP-TP");
	d.attack("CLAP-TP");
	a.takeDamage(d.getAttackDamage());
	d.beRepaired(5);
	d.whoAmI();
	d.highFivesGuys();
	d.guardGate();

	std::cout << std::endl;
	delete ptr;
	delete fragPtr;
	delete scavPtr;

	return 0;
}
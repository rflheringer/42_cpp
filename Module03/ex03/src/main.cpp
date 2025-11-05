/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:38:15 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/11/05 16:20:02 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"

int main() {
	ClapTrap a("ClapTrap");
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
	f.attack("ClapTrap");
	s.beRepaired(7);

	DiamondTrap d("dynamo");

	ClapTrap* ptr = new DiamondTrap(d);
	FragTrap* fragPtr = new FragTrap(d);
	ScavTrap* scavPtr = new ScavTrap(d);

	ptr->attack("ClapTrap");
	fragPtr->attack("ClapTrap");
	scavPtr->attack("ClapTrap");
	d.attack("ClapTrap");
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
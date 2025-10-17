/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:38:15 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/15 11:50:53 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/FragTrap.hpp"

int main() {
	ClapTrap a("ClapTrap");
	ClapTrap b("CL4P-TP");

	std::cout << std::endl;

	FragTrap f("FragTrap");
	FragTrap f2("FR4G-TP");

	ClapTrap* ptr = new FragTrap(f);

	f = f2;

	ptr->attack("CL4P-TP");
	b.takeDamage(f.getAttackDamage());
	f.takeDamage(30);
	f.takeDamage(-1);
	f.highFivesGuys();
	ptr->beRepaired(5);
	b.beRepaired(5);
	f.takeDamage(180);
	f.attack("ClapTrap");

	std::cout << std::endl;
	delete ptr;

	return 0;
}
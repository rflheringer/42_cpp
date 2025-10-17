/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:38:15 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/08 12:54:55 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ScavTrap.hpp"

int main() {
	ClapTrap a("ClapTrap");
	ClapTrap b("CL4P-TP");

	std::cout << std::endl;

	ScavTrap s("ScavTrap");
	ClapTrap* ptr = new ScavTrap(s);

	ptr->attack("Jane doe");
	b.takeDamage(s.getAttackDamage());
	s.takeDamage(30);
	s.takeDamage(-1);
	s.guardGate();
	ptr->beRepaired(5);
	b.beRepaired(5);
	s.takeDamage(180);
	s.attack("John");

	std::cout << std::endl;
	delete ptr;

	return 0;
}
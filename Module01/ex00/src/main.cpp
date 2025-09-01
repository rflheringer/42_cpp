/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:04:27 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 15:13:21 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main (void){
	std::cout << "Heap" << std::endl;
	Zombie* zombie = newZombie("Stubbs");
	zombie->announce();
	delete zombie;

	std::cout << std::endl;

	std::cout << "Stack" << std::endl;
	randomChump("Stubbs 2");
	return (0);
}
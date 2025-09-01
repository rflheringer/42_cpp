/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:54:39 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 16:52:01 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie* zombie = new Zombie[N];

	for (int i = 0; i < N; i++){
		zombie[i].setNames(name);
		std::cout << "Zombie " << name << "_" << i+1 << " was named!" << std::endl;
	}
	return (zombie);
}
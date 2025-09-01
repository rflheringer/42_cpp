/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:52:29 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 16:53:50 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void){
	
	int N = 5;
	Zombie* zombie = zombieHorde(N, "Stubbs");

	for(int i = 0; i < N; i++)
		zombie[i].announce();
		
	delete[] zombie;
}
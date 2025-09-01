/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:56:23 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 13:20:26 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name){
	name_ = name;
	std::cout << "Zombie " << name_ << " was created!" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << name_ << " was destroyed!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


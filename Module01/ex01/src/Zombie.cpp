/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:54:24 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 16:51:28 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(){
	std::cout << "A Zombie was created!" << std::endl;
}

void	Zombie::announce() const{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setNames(std::string name){
	name_ = name;
}

Zombie::~Zombie(void){
    std::cout << name_ << " was destroyed." << std::endl;
}
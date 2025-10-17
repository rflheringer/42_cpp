/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:01:19 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/15 11:50:56 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/FragTrap.hpp"

FragTrap::FragTrap(const std::string name_) : ClapTrap(name_){
    hitPoints_ = 100;
    energyPoints_ = 100;
    attackDamage_ = 30;
    std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
    std::cout << "FragTrap copy constructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
    std::cout << "FragTrap copy assignment constructor called1" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap(){
    std::cout <<  "FragTrap destructor called"  << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap high five!!" << std::endl;
}
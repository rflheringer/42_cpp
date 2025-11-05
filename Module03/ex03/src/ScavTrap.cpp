/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:20:36 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/11/05 16:13:17 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name_) : ClapTrap(name_){
    hitPoints_ = 100;
    energyPoints_ = 50;
    attackDamage_ = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap copy assignment constructor called" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called!" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (hitPoints_ > 0 && energyPoints_ > 0){
        energyPoints_ -= 1;
        std::cout << "ScavTrap " << name_ << " attacks " <<  target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
    }
    else if (energyPoints_ == 0)
        std::cout << "ScavTrap " << name_ << " can`t attack because don`t have energy anymore!" << std::endl;
    else
        std::cout << "ScavTrap " << name_ << " can`t attack because is already dead!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name_ << " is now in Gate keeper mode!" << std::endl;
}


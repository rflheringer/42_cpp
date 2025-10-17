/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:33:36 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/17 15:08:28 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name)
    :   ClapTrap(name + "_clap_name"),
        ScavTrap(name),
        FragTrap(name),
    name_(name)
    {
        hitPoints_ = FragTrap::hitPoints_;
        energyPoints_ = ScavTrap::energyPoints_;
        attackDamage_ = FragTrap::attackDamage_;
        std::cout << "DiamondTrap default constructor called!" << std::endl;
    }

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    :   ClapTrap(other),
        ScavTrap(other),
	    FragTrap(other),
	    name_(other.name_)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
    std::cout << "Diamond copy constructor called!" << std::endl;
    if (this != &other){
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        name_ = other.name_;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "DiammondTrap name " << name_ << " and ClapTrap name" << ClapTrap::name_ << std::endl;
}


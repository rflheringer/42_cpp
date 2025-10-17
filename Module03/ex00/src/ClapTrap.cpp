/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:38:12 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/07 12:09:35 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name)
    : name_(name),
    hitPoints_(10),
    energyPoints_(10),
    attackDamage_(0) {
    std::cout << "Default Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name_(other.name_),
    hitPoints_(other.hitPoints_),
    energyPoints_(other.energyPoints_),
    attackDamage_(other.attackDamage_) {
        std::cout << "Copy constructorr called" << std::endl;
}



ClapTrap::~ClapTrap(){
    std::cout << "Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints_ > 0 && energyPoints_ > 0) {
        energyPoints_ -= 1;
        std::cout << name_ << " attacks " << target << ", causing " << attackDamage_ << " points of damage!" << std::endl;
    } else {
        std::cout << name_ 
                  << (hitPoints_ == 0 ? " can't attack because they are already dead!" : " can't attack because they are exhausted!") << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (amount > INT_MAX){
        std::cout << "ClapTrap dosen`t accept negative numbers!" << std::endl;
        return ;
    }
    if (hitPoints_ > 0) {
        hitPoints_ -= amount;
        if (hitPoints_ < 0){
            hitPoints_ = 0;
        std::cout << name_ << " has taken " << amount << " points of damage! and now has " << hitPoints_ << " hit ponts!" << std::endl;
        }
        else
            std::cout << name_ << " is already dead!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (amount > INT_MAX){
        std::cout << "ClapTrap dosen`t accept negative numbers!" << std::endl;
        return ;
    }
    if (hitPoints_ > 0  && energyPoints_ >> 0){
        hitPoints_ += amount;
        energyPoints_ -= 1;
        std::cout << name_ << " has repaired " << amount << " point of life and now have " << hitPoints_ << " of life!" << std::endl;
    }
    else if (hitPoints_ <= 0)
        std::cout << name_ << " was already dead and can`t repaired any points of life!" << std::endl;
    else 
        std::cout << name_ << " don`t have more energy, good luck!" << std::endl;
}

int ClapTrap::getAttackDamage(){
    return attackDamage_;
}

void ClapTrap::setAttackDamage(unsigned int damage){
    if (attackDamage_ > INT_MAX){
        std::cout << "ClapTrap don`t accept negative numbers!" << std::endl;
        return ;
    }
    std::cout << name_ << " has now " << damage << " of attack damage!" << std::endl;
    attackDamage_ = damage;
}

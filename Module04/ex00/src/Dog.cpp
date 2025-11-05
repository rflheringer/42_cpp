/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:55:15 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/20 15:57:39 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal(){
    type_ = "Dog";
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
    *this = other;
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog coppy assignment constructor called!" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "woof woof!" << std::endl;
}
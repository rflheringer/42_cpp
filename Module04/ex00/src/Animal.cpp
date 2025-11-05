/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:16:29 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/20 19:21:53 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : type_("Animal"){
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal& other){
    *this = other;
    std::cout << "Cppy constructor called!" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Copy assignement constuctor called!" <<std::endl;
    if (this != &other) {
        type_ = other.type_;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "Animal make sound!" << std::endl;
}

std::string Animal::getType() const {
    return type_;
}
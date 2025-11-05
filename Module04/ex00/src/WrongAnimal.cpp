/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:03:54 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/20 19:26:52 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    *this = other;
    std::cout << "WrongAninal copy constructor called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
    if (this != &other){
        type_ = other.type_;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal make sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type_;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:55:13 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/20 17:30:48 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal(){
    type_ = "Cat";
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal (other) {
    *this = other;
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat copy assignment constructor called!" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
} 

Cat::~Cat(){
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}
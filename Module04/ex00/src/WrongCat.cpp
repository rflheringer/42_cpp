/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:05:45 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/20 19:29:16 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
    type_ = "WrongCat";
    std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongAnimal& other) : WrongAnimal(other){
    *this = other;
    std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongAnimal& other){
    std::cout << "WrongCat copy assignment constructor called1" << std::endl;
    if (this != &other){
        WrongAnimal::operator=(other);
    }
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat make sound!" << std::endl;
}
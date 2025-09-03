/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:47:47 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/03 17:43:54 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::fracBits_ = 8;

Fixed::Fixed() :raw_(0){
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl; 
    this->raw_ = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &other)
        this->raw_ = other.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return raw_;
}

void Fixed::setRawBits(int const raw){
    raw_ = raw;
}
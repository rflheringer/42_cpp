/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:47:47 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/29 14:21:44 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::fracBits_ = 8;

Fixed::Fixed() :raw_(0){
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const int value) {
	std::cout << "Int Construtor called" << std::endl;
	raw_ = value << fracBits_;
}

Fixed::Fixed(const float value){
	std::cout << "Float construtor called" << std::endl;
	raw_ = roundf(value * (1 << fracBits_));
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

int Fixed::getRawBits(void) const {
    return raw_;
}

float Fixed::toFloat(void) const {
	return (float)raw_ / (1 << fracBits_);
}

int Fixed::toInt(void) const {
	return raw_ >> fracBits_;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}
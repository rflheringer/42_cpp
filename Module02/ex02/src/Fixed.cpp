/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:47:47 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/29 15:54:49 by rheringe         ###   ########.fr       */
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

void Fixed::setRawBits(int const raw) {
    raw_ = raw;
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

bool Fixed::operator>(const Fixed& object) const {
	return (raw_ > object.raw_);
}

bool Fixed::operator<(const Fixed& object) const {
	return (raw_ < object.raw_);
}

bool Fixed::operator==(const Fixed& object) const {
	return (raw_ == object.raw_);
}

bool Fixed::operator!=(const Fixed& object) const {
	return (raw_ != object.raw_);
}

bool Fixed::operator>=(const Fixed& object) const {
	return (raw_ >= object.raw_);
}

bool Fixed::operator<=(const Fixed& object) const {
	return (raw_ <= object.raw_);
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed result;
	result.setRawBits(this->raw_ + other.raw_);
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed result;
	result.setRawBits(this->raw_ - other.raw_);
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed result;
	result.setRawBits((this->raw_* other.raw_) >> fracBits_);
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed result;
	result.setRawBits((this->raw_ << fracBits_) / other.raw_);
	return result;
}

Fixed& Fixed::operator++(){
	raw_ += 1;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp(*this);
	raw_ += 1;
	return temp;
}

Fixed& Fixed::operator--(){
	raw_ -= 1;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed temp(*this);
	raw_-= 1;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	 return (a > b) ? a : b;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:05:57 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/29 16:40:39 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(0), y_(0){
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float fx, const float fy) : x_(fx), y_(fy){
	std::cout << "Float constructor called" << std::endl;
}

Point::Point(const Point& other) : x_(other.x_), y_(other.y_){
	std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& other){
	std::cout << "Copy assignment constuctor called" << std::endl;
	(void)other;
	return *this;
}

Point::~Point(){
	std::cout << "Destructor Called" << std::endl;
}


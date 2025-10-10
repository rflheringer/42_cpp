/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:07:30 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/29 16:31:33 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
	private:
		Fixed const x_;
		Fixed const y_;
	public:
		Point();
		Point(const float fx, const float fy);
		Point(const Point& other);
		Point& operator = (const Point& other);
		~Point();
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif /* POINT_HPP */
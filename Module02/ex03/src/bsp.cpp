/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:05:54 by rheringe          #+#    #+#             */
/*   Updated: 2025/10/20 12:17:58 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

#include "../include/Point.hpp"
#include <iostream>
#include <cmath>

static double area(Point const& a, Point const& b, Point const& c) {
    return std::abs(
        (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
         b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
         c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0
    );
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    double areaABC = area(a, b, c);
    double areaPBC = area(point, b, c);
    double areaAPC = area(a, point, c);
    double areaABP = area(a, b, point);
    double sum = areaPBC + areaAPC + areaABP;

    std::cout << "────────────────────────────────────────────" << std::endl;
    std::cout << "Triangle vertices:" << std::endl;
    std::cout << "  A(" << a.getX().toFloat() << ", " << a.getY().toFloat() << ")" << std::endl;
    std::cout << "  B(" << b.getX().toFloat() << ", " << b.getY().toFloat() << ")" << std::endl;
    std::cout << "  C(" << c.getX().toFloat() << ", " << c.getY().toFloat() << ")" << std::endl;
    std::cout << "Test point:" << std::endl;
    std::cout << "  P(" << point.getX().toFloat() << ", " << point.getY().toFloat() << ")" << std::endl;
    std::cout << std::endl;


    std::cout << "Triangle areas:" << std::endl;
    std::cout << "  Area(P, B, C) = " << areaPBC << std::endl;
    std::cout << "  Area(A, P, C) = " << areaAPC << std::endl;
    std::cout << "  Area(A, B, P) = " << areaABP << std::endl;
    std::cout << "  Total (PBC + APC + ABP) = " << sum
              << " | Area(ABC) = " << areaABC << std::endl;

    if (areaPBC < 1e-9 || areaAPC < 1e-9 || areaABP < 1e-9) {
        std::cout << "→ The point lies on an edge or vertex of the triangle. (Result: 0)" << std::endl;
        return false;
    }

    if (std::abs(sum - areaABC) < 1e-9) {
        std::cout << "→ The point is inside the triangle. (Result: 1)" << std::endl;
        return true;
    }

    std::cout << "→ The point is outside the triangle. (Result: 0)" << std::endl;
    return false;
}

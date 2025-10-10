/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:05:54 by rheringe          #+#    #+#             */
/*   Updated: 2025/10/10 12:12:55 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){

	double areaABC = area(a,b,c);
	double areaPBC = area(point, b, c);
	double areaAPC = area(a, point, c);
	double areaABP = area(a, b, point);

	if (areaPBC == 0 || areaAPC == 0 || areaABP == 0)
		return false;
		
	double sum = areaPBC + areaAPC + areaABP;
	
	return std::abs(sum - areaABC) < 1e-9;
}

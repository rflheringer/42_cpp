/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:47:44 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/20 13:47:28 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

int main() {
	{
		Point	a(0, 0);
		Point	b(10, 0);
		Point   c(0, 10);
	
		Point	inside(3, 3);
		Point	outside(0, 5);
		Point	edge(8, 8);

		std::cout << std::endl;
		bool	in = bsp(a, b, c, inside);
		std::cout << "Inside?  " << in << std::endl;
		std::cout << std::endl;
		bool	out = bsp(a, b, c, outside);
		std::cout << "Outside? " << out << std::endl;
		std::cout << std::endl;
		bool	ed = bsp(a, b, c, edge);
		std::cout << "Edge? " << ed << std::endl;
		std::cout << std::endl;
	}
	{
		Point   a(-2, -1);
		Point   b(3, -2);
		Point   c(0, 4);
		
		Point	P1(0, 0);
		Point	P2(3, 2);
		Point	P3(-1, 3);
		Point	P4(0, 4);
		
		bool	in = bsp(a, b, c, P1);
		std::cout << "Inside?  " << in << std::endl;
		std::cout << std::endl;
		bool	out = bsp(a, b, c, P2);
		std::cout << "Outside? " << out << std::endl;
		std::cout << std::endl;
		bool	outside = bsp(a, b, c, P3);
		std::cout << "Outside? " << outside << std::endl;
		std::cout << std::endl;
		bool	vertex = bsp(a, b, c, P4);
		std::cout << "Vertex? " << vertex << std::endl;
	}	
	return 0;
}
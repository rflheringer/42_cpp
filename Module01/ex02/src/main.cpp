/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:56:17 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 17:23:40 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (){

	std::string brain;
	brain = "HI THIS IS BRAIN";
	
	std::string* stringPTR;
	stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
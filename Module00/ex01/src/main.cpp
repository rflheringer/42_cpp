/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 17:30:19 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/08/25 17:48:26 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/Phonebook.hpp"

static void write_options()
{
	std::cout << "\n|--------------|" << std::endl;
	std::cout << "| My Phonebook |" << std::endl;
	std::cout << "|--------------|" << std::endl;
	std::cout << "|  1 - ADD     |" << std::endl;
	std::cout << "|  2 - SEARCH  |" << std::endl;
	std::cout << "|  3 - EXIT    |" << std::endl;
	std::cout << "|______________|\n" << std::endl;
}

int main (int argc, char **argv)
{
	if (argv){};
	
	if (argc == 1)
	{
		Phonebook	bookList;
		std::string option;
		
		while (option != "EXIT" && option != "3")
		{
			write_options();
			std::getline(std::cin, option);
			for (size_t i = 0; i < option.length(); i++)
				option[i] = (char)(toupper(option[i]));
			if (option == "SEARCH" || option == "2")
				bookList.search();
			else if (option == "ADD" || option == "1")
				bookList.add();
			else if (option == "EXIT" || option == "3")
			{
				std::cout << "\nEnding Phonebook... \n" << std::endl;
				break ;
			}
			else
			{
				std::cout << "\nInvalid Option" << std::endl;
			}
		}
	}
	else
		std::cout << "Error, Too many arguments" << std::endl;
	return (0);
}
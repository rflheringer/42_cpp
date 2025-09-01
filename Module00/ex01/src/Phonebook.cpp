/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 17:09:35 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/08/25 17:41:31 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.hpp"

Phonebook::Phonebook() : i_(0){}
Phonebook::~Phonebook(){}

void    Phonebook::add(){

    Contact     newContact;
    std::string input;
	bool		valid;

	std::cout << "\nPlease enter the details for the new contact:\n";

    valid = false;
    while (!valid) {
        std::cout << "First Name: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "First Name cannot be empty.\n";
        } else {
            valid = true;
        }
    }
    newContact.setFirstName(input);

    valid = false;
    while (!valid) {
        std::cout << "Last Name: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Last Name cannot be empty.\n";
        } else {
            valid = true;
        }
    }
    newContact.setLastName(input);

    valid = false;
    while (!valid) {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Nickname cannot be empty.\n";
        } else {
            valid = true;
        }
    }
    newContact.setNickName(input);

    valid = false;
	while (!valid) {
		std::cout << "Phone Number (up to 11 digits): ";
		std::getline(std::cin, input);
		valid = true;
		if (input.length() != 11)
			valid = false;
		for (size_t i = 0; i < input.length(); i++) {
			if (!std::isdigit(input[i])) {
				valid = false;
				break;
			}
		}
		if (!valid)
			std::cout << "Invalid phone number. Only numbers allowed and max 11 digits.\n";
	}
	newContact.setPhoneNumber(input);

    valid = false;
    while (!valid) {
        std::cout << "Dark Secret: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Dark Secret cannot be empty.\n";
        } else {
            valid = true;
        }
    }
    newContact.setDarkSecret(input);
    
    contacts_[i_ % 8] = newContact;
    i_++;

    std::cout << "\nContact added with successfully" << std::endl;
}

std::string truncate(const std::string& str){
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}

void Phonebook::printSpecificContact(int index) const{

	std::cout << std::left
		<< "\nFirst Name: " << std::setw(10) << contacts_[index].getFirstName()
		<< "\nLast Name: " << std::setw(10) << contacts_[index].getLastName();
	std::cout << std::left
		<< "\nPhonenumber: " << std::setw(10) << contacts_[index].getPhoneNumber();
	std::cout << std::left
		<< "\nNickname: " << std::setw(10) << contacts_[index].getNickName()
		<< "\nDark Secret: " << std::setw(10) << contacts_[index].getDarkSecret()
		<< "\n";
		std::cin.ignore();
}

void Phonebook::printContacts() const {

	std::string	number;
	int			count;
	int			index;

	if (i_ == 0)
		std::cout << "\nYou don't have any contacts yet" << std::endl;
	else {
		count = (i_ < 8) ? i_ : 8;
		std::cout << std::left
			  << "\n|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname"
			  << "|\n";

		for (int j = 0; j < count; j++) {
			std::cout << "|" << std::setw(10) << j + 1
			  << "|" << std::setw(10) << truncate(contacts_[j].getFirstName())
			  << "|" << std::setw(10) << truncate(contacts_[j].getLastName())
			  << "|" << std::setw(10) << truncate(contacts_[j].getNickName())
			  << "|\n";
		}
		std::cout << "\nEnter a number between 1 and " << count << " to view the full contact details." << std::endl;
		std::cin >> number;
		while (number.length() != 1 || !std::isdigit(number[0]) || (number[0]-'0') > count) {
    		std::cout << "\nInvalid input, please enter a number between 1 and " << count << " to view the full contact details." << std::endl;
    		std::cin >> number;
		}
		index = number[0] - '0' - 1;
		printSpecificContact(index);
	}
}

void Phonebook::search(){
    printContacts();
}
		


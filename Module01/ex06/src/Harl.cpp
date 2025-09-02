/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:11:39 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/02 19:24:05 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug_(){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl; 
    std::cout << "I really do!\n" << std::endl;
}

void Harl::info_(){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl; 
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning_(){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void Harl::error_(){
    std::cout << "[ ERROR ]" << std::endl;
     std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

static int getLevel(std::string level){
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            return i;
    return 4;
}

void Harl::complain(std::string level){
    switch (getLevel(level)){
        case 0:
            debug_();
        case 1:
            info_();
        case 2:
            warning_();
        case 3:
            error_();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ] " << std::endl;
    }
}
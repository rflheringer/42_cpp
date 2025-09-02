/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:11:42 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/02 18:55:49 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main (int argc, char **argv){

    Harl harl = Harl();
    
    if (argc != 2){
        std::cout << "Usage: ./harlFilter <level> [DEBUG / INFO/ ERROR / WARNING]" << std::endl;
        return (1);
    }
        harl.complain(argv[1]);
}
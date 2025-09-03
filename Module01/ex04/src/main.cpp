/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:12:42 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/03 10:34:02 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Replace.hpp"

int main (int argc, char **argv){
    if (argc < 4){
            std::cout << "Too few arguments" << std::endl;
            return 1;
    } else if (argc > 4 ) {
        std::cout << "Too many arguments" << std::endl;
        return 1;
    }
    stringReplace(argv[1], argv[2], argv[3]);
    return 0;
}
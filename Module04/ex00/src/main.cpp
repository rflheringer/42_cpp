/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:54:56 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/10/20 19:26:00 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main (){

    std::cout << "RIGHT ANIMAL FUNCTIONS" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    meta->makeSound();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << std::endl;
    i->makeSound();
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;
    j->makeSound();
    std::cout << j->getType() << " " << std::endl;
    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;

    std::cout << "WRONG ANIMAL FUNCTIONS" << std::endl;
};
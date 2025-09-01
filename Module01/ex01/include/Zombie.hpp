/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:39:14 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 16:37:03 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string name_;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce() const;
		void	setNames(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif /*ZOMBIE_HPP*/
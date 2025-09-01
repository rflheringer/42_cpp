/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:05:07 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 13:09:54 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string name_;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};	

	void	randomChump(std::string name);
	Zombie*	newZombie(std::string name);

#endif /* ZOMBIE_HPP */
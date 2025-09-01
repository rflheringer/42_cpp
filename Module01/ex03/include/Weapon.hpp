/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:27:33 by rheringe          #+#    #+#             */
/*   Updated: 2025/09/01 18:24:47 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon{
	private:
		std::string type_;
	public:
		Weapon(std::string type);
		~Weapon();
		void	setWeapon(std::string type);
};

#endif /*WEAPON_HPP*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:38:09 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/11/05 16:07:09 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <climits>

class ClapTrap{
    protected:
        std::string name_;
        int         hitPoints_;
        int         energyPoints_;
        int         attackDamage_;

    public:
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator = (const ClapTrap& other);
        virtual ~ClapTrap();
        virtual void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        int     getAttackDamage();
        void    setAttackDamage(unsigned int damage);
};


#endif /* CLAPTRAP_HPP */
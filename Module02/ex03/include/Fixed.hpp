/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:47:11 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/29 16:07:22 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int raw_;
        static const int fracBits_;
    public:
        Fixed();
		Fixed(const int value);
		Fixed(const float value);
        Fixed(const Fixed& other);
        Fixed& operator = (const Fixed& other);
        ~Fixed();
		int		toInt(void) const;
		float	toFloat(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif /* FIXED_HPP */
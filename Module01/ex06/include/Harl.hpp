/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelheringer <rafaelheringer@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:11:29 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/02 18:50:52 by rafaelherin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
    private:
        void debug_();
        void warning_();
        void info_();
        void error_();
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif /* HARL_HPP */
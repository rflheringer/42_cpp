/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 17:11:46 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/01 13:57:57 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <cctype>

class Contact
{
    private:
        std::string firstName_;
        std::string lastName_;
        std::string nickname_;
        std::string phoneNumber_;
        std::string darkSecret_;
        
    public :
        Contact();
        ~Contact();

        //first type that method return and last inform that function can`t change anything.
        std::string getFirstName() const;
        void        setFirstName(std::string firstName);
        std::string getLastName() const;
        void        setLastName(std::string lastName);
        std::string getNickName() const;
        void        setNickName(std::string nickName);
        std::string getPhoneNumber() const;
        void        setPhoneNumber(std::string phoneNumber);
        std::string getDarkSecret() const;
        void        setDarkSecret(std::string darkSecret);
};

#endif
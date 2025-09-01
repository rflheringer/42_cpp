/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 17:11:14 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/09/01 13:57:58 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
    private:
        Contact contacts_[8];
        int     i_;

    public:
        Phonebook();
        ~Phonebook();

        void add();
        void search();
        void printContacts() const;
        void printSpecificContact(int index) const;
};

#endif
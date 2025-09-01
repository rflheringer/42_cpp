/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheringe <rheringe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 21:04:40 by rafaelherin       #+#    #+#             */
/*   Updated: 2025/08/25 17:41:23 by rheringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact(){
    firstName_   = "";
    lastName_    = "";
    nickname_    = "";
    phoneNumber_ = "";
    darkSecret_  = "";
    return ;
}

Contact::~Contact(){}

std::string Contact::getFirstName() const {
    return firstName_;
}
std::string Contact::getLastName() const {
    return lastName_;
}
std::string Contact::getNickName() const {
    return nickname_;
}
std::string Contact::getPhoneNumber() const {
    return phoneNumber_;
}
std::string Contact::getDarkSecret() const {
    return darkSecret_;
}

void Contact::setFirstName(std::string firstName){
    this->firstName_ = firstName;
}
void Contact::setLastName(const std::string lastName){
    this->lastName_ = lastName;
}
void Contact::setDarkSecret(const std::string darkSecret){
    this->darkSecret_ = darkSecret;
}
void Contact::setNickName(const std::string nickname){
    this->nickname_ = nickname;
}
void Contact::setPhoneNumber(const std::string phoneNumber){
    this->phoneNumber_ = phoneNumber;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:12:27 by picatrai          #+#    #+#             */
/*   Updated: 2024/03/26 17:49:00 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void    Contact::_new_contact(int index)
{
    std::cout << std::endl;
    this->index = index;
    this->_first_name = this->_get_input("First name -> ");
    this->_last_name = this->_get_input("Last name -> ");
    this->_nickname = this->_get_input("Nickname -> ");
    this->_phone_number = this->_get_input("Phone number -> ");
    this->_darkest_secret = this->_get_input("Darkest secret -> ");
    std::cout << std::endl;
}

std::string Contact::_get_input(std::string msg)
{
    int good;
    std::string input;

    good = 1;
    while (good)
    {
        std::cout << msg;
        if (!std::getline(std::cin, input))
            exit(2);
        if (input.size() == 0 || this->_is_input_valid(input) == false)
            std::cout << "Invalid input, please enter a correct information" << std::endl;
        else
            good = 0;
    }
    return (input);
}

void Contact::_display_contact(void)
{   
    std::cout << std::endl;
    std::cout << "Index -> " << this->index + 1 << std::endl;
    std::cout << "First name -> " << this->_first_name << std::endl;
    std::cout << "Last name -> " << this->_last_name << std::endl;
    std::cout << "Nickname -> " << this->_nickname << std::endl;
    std::cout << "Phone number -> " << this->_phone_number << std::endl;
    std::cout << "Darkest secret -> " << this->_darkest_secret << std::endl;
    std::cout << std::endl;
}

void Contact::_display_basic(void)
{
    std::cout << std::setw(10) << this->index + 1 << std::flush;
    std::cout << "|" << std::setw(10) << this->_str_max_10(this->_first_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_str_max_10(this->_last_name) << std::flush;
    std::cout << "|" << std::setw(10) << this->_str_max_10(this->_nickname) << std::flush;
    std::cout << std::endl;
}

std::string Contact::_str_max_10(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

bool Contact::_is_input_valid(std::string input)
{
    if (input.find("\x1b[A") <= input.length() || input.find("\x1b[B") <= input.length() || input.find("\x1b[C") <= input.length())
        return (false);
    else if (input.find("\x1b[D") <= input.length() || input.find("\t") <= input.length())
        return (false);
    return (true);
}

void Contact::setIndex(const int new_index)
{
    index = new_index;
}

void Contact::setFirstName(const std::string& first_name)
{
    _first_name = first_name;
}

void Contact::setLastName(const std::string& last_name)
{
    _last_name = last_name;
}

void Contact::setNickname(const std::string& nickname)
{
    _nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phone_number)
{
    _phone_number = phone_number;
}

void Contact::setDarkestSecret(const std::string& darkest_secret)
{
    _darkest_secret = darkest_secret;
}

int Contact::getIndex() const
{
    return (index);
}

std::string Contact::getFirstName() const
{
    return (_first_name);
}

std::string Contact::getLastName() const
{
    return (_last_name);
}

std::string Contact::getNickname() const
{
    return (_nickname);
}

std::string Contact::getPhoneNumber() const
{
    return (_phone_number);
}

std::string Contact::getDarkestSecret() const
{
    return (_darkest_secret);
}
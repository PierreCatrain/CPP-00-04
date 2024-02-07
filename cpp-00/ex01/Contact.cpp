/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:12:27 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/07 00:57:32 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

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
        std::getline(std::cin, input);
        if (input.size() == 0)
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
        return str.substr(0, 9) + ".";
    return str;
}
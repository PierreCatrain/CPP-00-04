/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:12:27 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/06 07:21:53 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void    Contact::_new_contact(int index)
{
    this->index = index;
    this->_first_name = this->_get_input("First name -> ");
    this->_last_name = this->_get_input("Last name -> ");
    this->_nickname = this->_get_input("Nickname -> ");
    this->_phone_number = this->_get_input("Phone number -> ");
    this->_darkest_secret = this->_get_input("Darkest secret -> ");
}

std::string Contact::_get_input(std::string msg)
{
    int good;
    std::string input;

    good = 1;
    while (good)
    {
        std::cout << msg;
        std::cin >> input;
        if (input.size() == 0)
            std::cout << "Invalid input, please enter a correct information" << std::endl;
        else
            good = 0;
    }
    return (input);
}

void Contact::_display_contact(void)
{   
    std::cout << "Index -> " << this->index + 1 << std::endl;
    std::cout << "First name -> " << this->_first_name << std::endl;
    std::cout << "Last name -> " << this->_last_name << std::endl;
    std::cout << "Nickname -> " << this->_nickname << std::endl;
    std::cout << "Phone number -> " << this->_phone_number << std::endl;
    std::cout << "Darkest secret -> " << this->_darkest_secret << std::endl;
}

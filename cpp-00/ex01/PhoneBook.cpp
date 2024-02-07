/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:12:39 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/07 00:56:41 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>
#include <iomanip>

PhoneBook::PhoneBook(int nb) : _nb_contact(nb)
{
}

PhoneBook::~PhoneBook(void)
{
}

void    PhoneBook::add(void)
{
    this->_contact[this->_nb_contact % 8]._new_contact(this->_nb_contact % 8);
    this->_nb_contact++;
}

void    PhoneBook::search(void)
{
    std::string input;
    int nb;
    int lim;

    if (this->_nb_contact == 0)
    {
        std::cout << "you have no contact" << std::endl;
        return ;
    }
    std::cout << std::setw(10) << "Index" << std::flush;
    std::cout << "|" << std::setw(10) << "First name" << std::flush;
    std::cout << "|" << std::setw(10) << "Last name" << std::flush;
    std::cout << "|" << std::setw(10) << "Nickname" << std::flush;
    std::cout << std::endl;
    for (int index = 0; index < this->_nb_contact && index < 8; index++)
        this->_contact[index]._display_basic();
    if (this->_nb_contact > 8)
        lim = 8;
    else
        lim = this->_nb_contact;
    input = "";
    nb = -1;
    while (nb < 1 || nb > 8 || nb > this->_nb_contact)
    {
        std::cout << "which one ? (between " << lim << " contact(s)) " << std::flush;
        std::getline(std::cin, input);
        std::istringstream iss(input);
        iss >> nb;
        if (iss.fail())
            nb = -1;
    }
    this->_contact[nb - 1]._display_contact();
}

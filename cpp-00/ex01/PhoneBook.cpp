/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:12:39 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/06 07:57:57 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>
#include <stdio.h>

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
    if (this->_nb_contact > 8)
        lim = 8;
    else
        lim = this->_nb_contact;
    input = "";
    nb = -1;
    while (nb < 1 || nb > 8 || nb > this->_nb_contact)
    {
        std::cout << "which one ? (between " << lim << " contact(s)) " << std::flush;
        std::cin >> input;
        std::istringstream iss(input);
        iss >> nb;
        if (iss.fail())
            nb = -1;
    }
    printf ("%d\n", nb);
    this->_contact[nb - 1]._display_contact();
}

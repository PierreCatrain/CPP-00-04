/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:09:06 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:48:24 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default")
{
    std::cout << "Animal's constructor has been called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal's constructor has been called" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
    *this = cpy;
    std::cout << "Animal's copy has been completed" << std::endl;
}

Animal& Animal::operator=(const Animal& cpy)
{
    this->_type = cpy._type;
    std::cout << "Animal's egal assignation has been completed" << std::endl;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal's destructor has been called" << std::endl;
}

void Animal::setType(std::string type)
{
    this->_type = type;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}
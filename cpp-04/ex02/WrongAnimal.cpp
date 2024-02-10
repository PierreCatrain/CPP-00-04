/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:12:23 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:40:56 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default")
{
    std::cout << "WrongAnimal's constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal's constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
    *this = cpy;
    std::cout << "WrongAnimal's copy has been completed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& cpy)
{
    this->_type = cpy._type;
    std::cout << "WrongAnimal's egal assignation has been completed" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal's destructor has been called" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Default \"WrongAnimal\" sound" << std::endl;
}
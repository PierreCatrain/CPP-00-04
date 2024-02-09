/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:36:08 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 05:36:18 by picatrai         ###   ########.fr       */
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

void Animal::makeSound(void) const
{
    if (this->_type == "Dog")
        std::cout << "Wouaf" << std::endl;
    else if (this->_type == "Cat")
        std::cout << "Miaou" << std::endl;
    else
        std::cout << "Default animal sound" << std::endl;
}
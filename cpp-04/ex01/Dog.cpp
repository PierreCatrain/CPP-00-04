/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:39:06 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 06:29:52 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    this->brain = new Brain;
    std::cout << "Dog's constructor has been called" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
    *this = cpy;
    std::cout << "Dog's copy has been completed" << std::endl;
}

Dog& Dog::operator=(const Dog& cpy)
{
    *this->brain = *cpy.brain;
    this->_type = cpy._type;
    std::cout << "Dog's egal assignation has been completed" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog's destructor has been called" << std::endl;
}

Brain* Dog::getBrain(void)
{
    return (this->brain);
}
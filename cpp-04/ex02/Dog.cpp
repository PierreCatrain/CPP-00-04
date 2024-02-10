/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:11:39 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:42:20 by picatrai         ###   ########.fr       */
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
    std::cout << "Dog's destructor has been called" << std::endl;
    delete this->brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Wouaf" << std::endl;
}

Brain* Dog::getBrain(void)
{
    return (this->brain);
}
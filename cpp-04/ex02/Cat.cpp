/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:11:28 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:42:51 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    this->brain = new Brain;
    std::cout << "Cat's constructor has been called" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
    *this = cpy;
    std::cout << "Cat's copy has been completed" << std::endl;
}

Cat& Cat::operator=(const Cat& cpy)
{
    *this->brain = *cpy.brain;
    this->_type = cpy._type;
    std::cout << "Cat's egal assignation has been completed" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat's destructor has been called" << std::endl;
    delete this->brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou" << std::endl;
}

Brain* Cat::getBrain(void)
{
    return (this->brain);
}
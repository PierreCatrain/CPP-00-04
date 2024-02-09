/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:23:41 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 05:26:35 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat's constructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy)
{
    *this = cpy;
    std::cout << "WrongCat's copy has been completed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& cpy)
{
    this->_type = cpy._type;
    std::cout << "WrongCat's egal assignation has been completed" << std::endl;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat's destructor has been called" << std::endl;
}
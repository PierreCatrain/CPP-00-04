/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:29:41 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 06:19:53 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _RawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed& cpy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_RawBits = cpy.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    this->_RawBits = raw;
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_RawBits);
}
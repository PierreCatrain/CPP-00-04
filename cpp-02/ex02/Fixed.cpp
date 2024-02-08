/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:27:50 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 06:56:56 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _RawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_RawBits = value << Fixed::_FractBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_RawBits = roundf(value *(1 << Fixed::_FractBits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& cpy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_RawBits = cpy._RawBits;
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    this->_RawBits = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_RawBits);
}

float   Fixed::convert_float(void) const
{
    return ((float)this->_RawBits / (1 << Fixed::_FractBits));
}

int Fixed::toInt(void) const
{
    return this->_RawBits >> Fixed::_FractBits;
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj)
{
	os << obj.convert_float();
	return (os);
}







bool    Fixed::operator>(const Fixed& opp)
{
    if (this->convert_float() > opp.convert_float())
        return (true);
    return (false);
}

bool    Fixed::operator<(const Fixed& opp)
{
    if (this->convert_float() < opp.convert_float())
        return (true);
    return (false);
}

bool    Fixed::operator>=(const Fixed& opp)
{
    if (this->convert_float() >= opp.convert_float())
        return (true);
    return (false);
}

bool    Fixed::operator<=(const Fixed& opp)
{
    if (this->convert_float() <= opp.convert_float())
        return (true);
    return (false);
}

bool    Fixed::operator==(const Fixed& opp)
{
    if (this->convert_float() == opp.convert_float())
        return (true);
    return (false);
}

bool    Fixed::operator!=(const Fixed& opp)
{
    if (this->convert_float() != opp.convert_float())
        return (true);
    return (false);
}








Fixed Fixed::operator+(const Fixed& opp)
{
    Fixed res (this->convert_float() + opp.convert_float());
    return (res);
}

Fixed Fixed::operator-(const Fixed& opp)
{
    Fixed res (this->convert_float() - opp.convert_float());
    return (res);
}

Fixed Fixed::operator*(const Fixed& opp)
{
    Fixed res (this->convert_float() * opp.convert_float());
    return (res);
}

Fixed Fixed::operator/(const Fixed& opp)
{
    Fixed res (this->convert_float() / opp.convert_float());
    return (res);
}





Fixed Fixed::operator++(void)
{
    ++(this->_RawBits);
    return (*this);
}

Fixed Fixed::operator--(void)
{
    --(this->_RawBits);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++(this->_RawBits);
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    --(this->_RawBits);
    return (tmp);
}






Fixed Fixed::min(Fixed& f1, Fixed& f2)
{
    if (f1.convert_float() < f2.convert_float())
        return (f1);
    return (f2);
}

Fixed Fixed::min(const Fixed& f1, const Fixed& f2)
{
    if (f1.convert_float() < f2.convert_float())
        return (f1);
    return (f2);
}

Fixed Fixed::max(Fixed& f1, Fixed& f2)
{
    if (f1.convert_float() > f2.convert_float())
        return (f1);
    return (f2);
}

Fixed Fixed::max(const Fixed& f1, const Fixed& f2)
{
    if (f1.convert_float() > f2.convert_float())
        return (f1);
    return (f2);
}
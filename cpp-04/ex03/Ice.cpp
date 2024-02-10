/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:01:06 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 07:47:04 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice& cpy) : AMateria("ice")
{
    *this = cpy;
}

Ice& Ice::operator=(const Ice& cpy)
{
    this->_type = cpy._type;
    return (*this);
}

Ice::~Ice(void)
{
}

AMateria* Ice::clone(void) const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
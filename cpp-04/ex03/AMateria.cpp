/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 03:48:44 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 07:52:36 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default")
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(const AMateria& cpy)
{
    *this = cpy;
}

AMateria& AMateria::operator=(const AMateria& cpy)
{
    this->_type = cpy._type;
    return (*this);
}

AMateria::~AMateria(void)
{
}

const std::string& AMateria::getType(void) const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}
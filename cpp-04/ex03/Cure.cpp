/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:10:26 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 07:46:39 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure& cpy) : AMateria("cure")
{
    *this = cpy;
}

Cure& Cure::operator=(const Cure& cpy)
{
    this->_type = cpy._type;
    return (*this);
}

Cure::~Cure(void)
{
}

AMateria* Cure::clone(void) const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
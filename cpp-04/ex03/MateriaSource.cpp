/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 06:27:59 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 07:43:58 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
    *this = cpy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& cpy)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i] != NULL)
            delete this->_inv[i];
        this->_inv[i] = cpy._inv[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i] != NULL)
            delete this->_inv[i];
    }
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i] == NULL)
        {
            this->_inv[i] = materia;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i]->getType() == type)
            return (this->_inv[i]->clone());
    }
    return (0);
}
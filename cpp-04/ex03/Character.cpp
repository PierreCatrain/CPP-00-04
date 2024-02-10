/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:39:32 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 08:46:11 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("DefaultName")
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
}

Character::Character(const Character& cpy)
{
    *this = cpy;
}

Character& Character::operator=(const Character& cpy)
{
    this->_name = cpy._name;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i] != NULL)
            delete this->_inv[i];
        this->_inv[i] = cpy._inv[i]->clone();
    }
    return (*this);
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i] != NULL)
            delete this->_inv[i];
    }
}

std::string const& Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inv[i] == NULL)
        {
            this->_inv[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        this->_inv[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "* there is no materia at index " << idx << " *" << std::endl;
        return ;
    }
    if (this->_inv[idx] != NULL)
        this->_inv[idx]->use(target);
    else
        std::cout << "* there is no materia at index " << idx << " *" << std::endl;
}
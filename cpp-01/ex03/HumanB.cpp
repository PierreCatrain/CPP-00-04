/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 03:32:41 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/07 05:07:57 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void    HumanB::attack(void)
{
    if (this->_weapon != NULL)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
		std::cout << this->_name << " attacks without weapon" << std::endl;
    
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
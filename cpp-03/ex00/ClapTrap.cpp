/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 07:09:17 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 07:48:58 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Constructor have been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
    *this = cpy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cpy)
{
    this->_name = cpy._name;
    this->_hit_points = cpy._hit_points;
    this->_energy_points = cpy._energy_points;
    this->_attack_damage = cpy._attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor have been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    
}
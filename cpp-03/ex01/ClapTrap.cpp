/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:41:00 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 00:55:34 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Constructor of ClapTrap has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Constructor of ClapTrap has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
    *this = cpy;
    std::cout << this->_name << " is now a copy of " << cpy._name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cpy)
{
    this->_name = cpy._name;
    this->_hit_points = cpy._hit_points;
    this->_energy_points = cpy._energy_points;
    this->_attack_damage = cpy._attack_damage;
    std::cout << this->_name << " is now egal to " << cpy._name << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor of ClapTrap has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead, it's impossible for him to attack" << std::endl;
        return ;
    }
    if (this->_energy_points == 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no more energy, he can't be attack" << std::endl;
        return ;
    }
    this->_energy_points--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " point(s) of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << this->_name << " is already dead, it's impossible for him to take more damage" << std::endl;
        return ;
    }
    this->_hit_points -= amount;
    std::cout << this->_name << " takes " << amount << " point(s) of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << this->_name << " is dead, he can't no more be repaired" << std::endl;
        return ;
    }
    if (this->_energy_points == 0)
    {
        std::cout << this->_name << " has no more energy, he can't be repaired" << std::endl;
        return ;
    }
    this->_energy_points--;
    this->_hit_points += amount;
    std::cout << this->_name << " gets " << amount << " hit point(s) back" << std::endl;
}
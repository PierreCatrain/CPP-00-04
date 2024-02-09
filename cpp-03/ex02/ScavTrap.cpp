/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:09:41 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 01:10:38 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_name = "Default";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "Constructor of ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "Constructor of ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy)
{
    *this = cpy;
    std::cout << this->_name << " is now a copy of " << cpy._name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
    this->_name = cpy._name;
    this->_hit_points = cpy._hit_points;
    this->_energy_points = cpy._energy_points;
    this->_attack_damage = cpy._attack_damage;
    std::cout << this->_name << " is now egal to " << cpy._name << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor of ScavTrap has been called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead, it's impossible for him to attack" << std::endl;
        return ;
    }
    if (this->_energy_points == 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no more energy, he can't be attack" << std::endl;
        return ;
    }
    this->_energy_points--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " point(s) of damage" << std::endl;
}

void ScavTrap::guardGate()
{
    if (this->_hit_points <= 0)
    {
        std::cout << this->_name << " is dead, it's impossible for him to switch to the gate keeper mode" << std::endl;
        return ;
    }
    std::cout << this->_name << " is now in gate keeper mode" << std::endl;
}
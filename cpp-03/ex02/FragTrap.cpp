/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:12:42 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 01:41:31 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    this->_name = "Default";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "Constructor of FragTrap has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "Constructor of FragTrap has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy)
{
    *this = cpy;
    std::cout << this->_name << " is now a copy of " << cpy._name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& cpy)
{
    this->_name = cpy._name;
    this->_hit_points = cpy._hit_points;
    this->_energy_points = cpy._energy_points;
    this->_attack_damage = cpy._attack_damage;
    std::cout << this->_name << " is now a egal to " << cpy._name << std::endl;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor of FragTrap has been called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->_hit_points <= 0)
    {
        std::cout << this->_name << " is dead, he can't no more do a high five" << std::endl;
        return ;
    }
    std::cout << "let's do a high five" << std::endl;
}
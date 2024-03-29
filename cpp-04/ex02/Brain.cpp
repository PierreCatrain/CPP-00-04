/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:10:12 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:10:22 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain's constructor has been called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
    *this = cpy;
    std::cout << "Brain's copy has been completed" << std::endl;    
}

Brain& Brain::operator=(const Brain& cpy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = cpy.ideas[i];
    std::cout << "Brain's egal assignation has been completed" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain's destructor has been called" << std::endl;
}
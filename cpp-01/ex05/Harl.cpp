/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 08:18:09 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 00:57:21 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void    Harl::error(void)
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string level_array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fonction_array[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    // void *fonction_array[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int index = 0; index < 4; index++)
    {
        if (level.compare(level_array[index]) == 0)
        {
            (this->*fonction_array[index])();
            break ;
        }
        if (index == 3)
        std::cout << level << " not found" << std::endl;
    }
}
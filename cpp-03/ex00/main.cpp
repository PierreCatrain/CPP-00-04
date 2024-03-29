/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 07:08:37 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 23:39:03 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap t1("T1");
    ClapTrap t2("T2");

    std::cout << std::endl;
    
    t1.attack("T2");
    t2.beRepaired(2);
    t1.takeDamage(6);
    t1.takeDamage(6);
    t1.takeDamage(6);

    std::cout << std::endl;
    
    return (0);
}
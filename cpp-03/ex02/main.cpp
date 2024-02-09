/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:09:04 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 01:43:25 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap t1("T1");
    ClapTrap t2("T2");
    ScavTrap st1("ST1");
    ScavTrap st2("ST2");
    FragTrap ft1("FT1");

    std::cout << std::endl;
    
    t1.attack("T2");
    t2.beRepaired(2);

    std::cout << std::endl;

    st1.attack("T1");
    st2.guardGate();
    st1.takeDamage(4);

    std::cout << std::endl;

    ft1.takeDamage(4);
    ft1.highFivesGuys();

    std::cout << std::endl;
            
    return (0);
}
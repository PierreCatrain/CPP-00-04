/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 02:12:58 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/07 02:30:14 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zstack("Zstack");
    std::cout << "A zombie has been created on the stack : Zstack" << std::endl;
    zstack.announce();
    
    
    Zombie *zheap = newZombie("Zheap");
    std::cout << "A zombie has been created on the heap : Zheap" << std::endl;
    zheap->announce();
    delete zheap;

    std::cout << "A zombie is going to be created on the stack by using randomChump" << std::endl;
    randomChump("Zchump");
    return (0);
}
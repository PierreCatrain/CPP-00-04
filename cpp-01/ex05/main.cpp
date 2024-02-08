/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 08:17:41 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 00:39:43 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    
    if (argc != 2)
    {
        std::cout << "error with args" << std::endl;
        return (1);
    }
    else if (argv[1][0] == '\0')
    {
        std::cout << "error with args" << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}
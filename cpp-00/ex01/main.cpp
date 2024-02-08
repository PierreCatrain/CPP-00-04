/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 00:53:18 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 01:04:10 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook PB(0);
    std::string input = "";

    while (input.compare("EXIT"))
    {
        if (input.compare("ADD") == 0 && input.size() == 3)
            PB.add();
        else if (input.compare("SEARCH") == 0 && input.size() == 6)
            PB.search();
        std::cout << "PhoneBook -> " << std::flush;
        std::getline(std::cin, input);
    }
    return (0);
}
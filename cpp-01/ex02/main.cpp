/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 03:15:55 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/07 03:24:49 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "L’adresse de la string en mémoire : " << &str << std::endl;
    std::cout << "L’adresse stockée dans stringPTR : " << stringPTR << std::endl;
    std::cout << "L’adresse stockée dans stringREF : " << &stringREF << std::endl;

    std::cout << "La valeur de la string : " << str << std::endl;
    std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
    std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;
    return (0);
}
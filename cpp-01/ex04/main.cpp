/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 06:31:52 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/07 08:02:54 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (1);
    }
    else if (strlen(argv[1]) == 0 || strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
    {
        std::cout << "Arguments shouldn't be empty" << std::endl;
        return (1);
    }
    Sed::replace(argv[1], argv[2], argv[3]);
    return (0);
}
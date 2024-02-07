/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 07:01:51 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/07 07:59:54 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
#include <string.h>

class Sed
{
    private:
        static std::string _replace_in_line(std::string line, std::string s1, std::string s2);
    public:
        Sed();
        ~Sed();
        static void    replace(char *filename, std::string s1, std::string s2);
};

#endif
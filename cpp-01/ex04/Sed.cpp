/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 07:04:58 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/07 08:11:34 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(void)
{
}

Sed::~Sed(void)
{
}

void    Sed::replace(char *filename, std::string s1, std::string s2)
{
    std::ifstream ifs(filename);
    if (ifs.is_open() == 0)
    {
        std::cout << "error with filename" << std::endl;
        return ;
    }
    std::ofstream ofs(strcat(filename, ".replace"));
    if (ofs.is_open() == 0)
    {
        std::cout << "error with new file" << std::endl;
        ifs.close();
        return ;
    }
    std::string line;
	while (ifs.eof() == false)
    {
        std::getline(ifs, line, '\n');
		ofs << Sed::_replace_in_line(line, s1, s2);
		if (ifs.eof() == false)
			ofs << std::endl;
	}
    ifs.close();
    ofs.close();
}

std::string Sed::_replace_in_line(std::string line, std::string s1, std::string s2)
{
    std::string out;
	int index = 0;
	int lim = 0;

	while (1) {
		lim = line.find(s1, index);
		if (lim == -1)
            break;
		out.append(line, index, lim - index);
		index = lim + s1.size();
		out.append(s2);
	}
	out.append(line, index);
	return (out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:48:43 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 00:34:41 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

class Brain
{
    public:
        Brain();
        Brain(const Brain& cpy);
        Brain& operator=(const Brain& cpy);
        ~Brain();

        std::string ideas[100];
};

#endif
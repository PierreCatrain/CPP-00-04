/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 02:37:00 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 01:12:37 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        void    announce(void);
        void    set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
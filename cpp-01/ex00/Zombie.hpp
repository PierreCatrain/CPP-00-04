/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 01:42:24 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 01:12:29 by picatrai         ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
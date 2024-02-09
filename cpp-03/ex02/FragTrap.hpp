/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:12:29 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 01:36:00 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

# ifndef CLAPTRAP_HPP_INCLUDED
#  define CLAPTRAP_HPP_INCLUDED
#  include "ClapTrap.hpp"
# endif

class   FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& cpy);
        FragTrap& operator=(const FragTrap& cpy);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif
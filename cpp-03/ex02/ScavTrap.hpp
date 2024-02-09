/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:09:53 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 01:11:00 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

# ifndef CLAPTRAP_HPP_INCLUDED
#  define CLAPTRAP_HPP_INCLUDED
#  include "ClapTrap.hpp"
# endif

class   ScavTrap : public ClapTrap
{
    private:
        
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& cpy);
        ScavTrap& operator=(const ScavTrap& cpy);
        ~ScavTrap();
        
        void attack(const std::string& target);
        void guardGate();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:01:13 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 05:24:52 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# ifndef AMATERIA_HPP_INCLUDED
#  define AMATERIA_HPP_INCLUDED
#  include "AMateria.hpp"
# endif

class   Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& cpy);
        Ice& operator=(const Ice& cpy);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
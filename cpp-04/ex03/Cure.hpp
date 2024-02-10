/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:10:32 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 05:17:39 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# ifndef AMATERIA_HPP_INCLUDED
#  define AMATERIA_HPP_INCLUDED
#  include "AMateria.hpp"
# endif

class   Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& cpy);
        Cure& operator=(const Cure& cpy);
        ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
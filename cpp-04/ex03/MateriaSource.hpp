/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 06:27:48 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 06:52:02 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# ifndef IMATERIASOURCE_HPP_INCLUDED
#  define IMATERIASOURCE_HPP_INCLUDED
#  include "IMateriaSource.hpp"
# endif

class   MateriaSource : public IMateriaSource
{
    private:
        AMateria *_inv[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& cpy);
        MateriaSource& operator=(const MateriaSource& cpy);
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
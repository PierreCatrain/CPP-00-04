/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 02:29:06 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:29:48 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# ifndef ANIMAL_HPP_INCLUDED
#  define ANIMAL_HPP_INCLUDED
#  include "Animal.hpp"
# endif

class   Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& cpy);
        Cat& operator=(const Cat& cpy);
        ~Cat();

        void makeSound() const;
};

# endif
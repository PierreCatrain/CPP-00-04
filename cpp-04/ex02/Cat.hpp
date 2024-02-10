/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:10:55 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:42:33 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# ifndef ANIMAL_HPP_INCLUDED
#  define ANIMAL_HPP_INCLUDED
#  include "Animal.hpp"
# endif

# ifndef BRAIN_HPP_INCLUDED
#  define BRAIN_HPP_INCLUDED
#  include "Brain.hpp"
# endif

class   Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat& cpy);
        Cat& operator=(const Cat& cpy);
        ~Cat();

        void makeSound() const;
        Brain* getBrain();
};

# endif
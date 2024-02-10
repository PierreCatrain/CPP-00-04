/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:38:52 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:35:38 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# ifndef ANIMAL_HPP_INCLUDED
#  define ANIMAL_HPP_INCLUDED
#  include "Animal.hpp"
# endif

# ifndef BRAIN_HPP_INCLUDED
#  define BRAIN_HPP_INCLUDED
#  include "Brain.hpp"
# endif

class   Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog& cpy);
        Dog& operator=(const Dog& cpy);
        ~Dog();

        void makeSound() const;
        Brain* getBrain();
};

# endif
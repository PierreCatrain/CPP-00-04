/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 02:20:17 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:31:49 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# ifndef ANIMAL_HPP_INCLUDED
#  define ANIMAL_HPP_INCLUDED
#  include "Animal.hpp"
# endif

class   Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& cpy);
        Dog& operator=(const Dog& cpy);
        ~Dog();

        void makeSound() const;
};

# endif
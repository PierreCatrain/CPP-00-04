/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:36:27 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 05:36:37 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

class   Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& cpy);
        Animal& operator=(const Animal& cpy);
        virtual ~Animal();
        
        void setType(std::string type);
        std::string getType() const;
        void    makeSound() const;
};

#endif
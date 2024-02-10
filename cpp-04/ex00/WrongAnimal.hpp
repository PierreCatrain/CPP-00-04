/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:18:05 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:31:05 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

class   WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& cpy);
        WrongAnimal& operator=(const WrongAnimal& cpy);
        virtual ~WrongAnimal();
        
        void setType(std::string type);
        std::string getType() const;
        virtual void    makeSound() const;
};

#endif
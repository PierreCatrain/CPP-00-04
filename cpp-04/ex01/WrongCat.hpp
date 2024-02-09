/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:39:27 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 05:39:28 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# ifndef WRONGANIMAL_HPP_INCLUDED
#  define WRONGANIMAL_HPP_INCLUDED
#  include "WrongAnimal.hpp"
# endif

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& cpy);
        WrongCat& operator=(const WrongCat& cpy);
        ~WrongCat();
};

# endif
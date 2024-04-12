/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:30:04 by picatrai          #+#    #+#             */
/*   Updated: 2024/04/12 04:32:45 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

class   Fixed
{
    private:
        int _RawBits;
        static const int _FractBits = 8;
    public:
        Fixed();
        Fixed(Fixed& cpy);
        ~Fixed();
        Fixed& operator=(Fixed& cpy);

        void setRawBits(int const raw);
        int getRawBits() const;
};

#endif
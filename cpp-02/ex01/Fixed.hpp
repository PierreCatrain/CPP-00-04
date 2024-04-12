/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 03:04:25 by picatrai          #+#    #+#             */
/*   Updated: 2024/04/12 06:40:10 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

# ifndef CMATH_INCLUDED
#  define CMATH_INCLUDED
#  include <cmath>
# endif

class   Fixed
{
    private:
        int _RawBits;
        static const int _FractBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& cpy);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();

        Fixed& operator=(const Fixed& cpy);
        void setRawBits(int const raw);
        int getRawBits() const;
        float   toFloat() const;
        int toInt() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed& obj);

#endif
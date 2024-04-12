/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:27:43 by picatrai          #+#    #+#             */
/*   Updated: 2024/04/12 06:40:44 by picatrai         ###   ########.fr       */
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

        bool    operator>(const Fixed& opp);
        bool    operator<(const Fixed& opp);
        bool    operator>=(const Fixed& opp);
        bool    operator<=(const Fixed& opp);
        bool    operator==(const Fixed& opp);
        bool    operator!=(const Fixed& opp);

        Fixed operator+(const Fixed& opp);
        Fixed operator-(const Fixed& opp);
        Fixed operator*(const Fixed& opp);
        Fixed operator/(const Fixed& opp);

        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed min(Fixed& f1, Fixed& f2);
        static Fixed min(const Fixed& f1, const Fixed& f2);
        static Fixed max(Fixed& f1, Fixed& f2);
        static Fixed max(const Fixed& f1, const Fixed& f2);
};

std::ostream &operator<<(std::ostream &os, const Fixed& obj);

#endif
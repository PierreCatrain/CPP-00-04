/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:38:43 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 01:10:54 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

# ifndef SSTREAM_INCLUDED
#  define SSTREAM_INCLUDED
#  include <sstream>
# endif

# ifndef IOMANIP_INCLUDED
#  define IOMANIP_INCLUDED
#  include <iomanip>
# endif


class PhoneBook
{
    private:
        Contact _contact[8];
        int _nb_contact;
        
    public:
        PhoneBook(int nb);
        ~PhoneBook();
        void    add();
        void    search();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:38:43 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/06 07:36:07 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"


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
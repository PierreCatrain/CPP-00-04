/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:13:01 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/08 01:10:34 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# ifndef IOSTREAM_INCLUDED
#  define IOSTREAM_INCLUDED
#  include <iostream>
# endif

class Contact
{
    private:
        int index;
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
        std::string _get_input(std::string msg);
        std::string _str_max_10(std::string str);
        
    public:
        Contact();
        ~Contact();
        void _new_contact(int index);
        void _display_contact();
        void _display_basic();
};

#endif
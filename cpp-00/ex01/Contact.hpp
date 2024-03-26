/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:13:01 by picatrai          #+#    #+#             */
/*   Updated: 2024/03/26 17:30:21 by picatrai         ###   ########.fr       */
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
        bool _is_input_valid(std::string input);
        std::string _str_max_10(std::string str);
        
    public:
        Contact();
        ~Contact();
        void _new_contact(int index);
        void _display_contact();
        void _display_basic();


        void setIndex(const int new_index);
        void setFirstName(const std::string& first_name);
        void setLastName(const std::string& last_name);
        void setNickname(const std::string& nickname);
        void setPhoneNumber(const std::string& phone_number);
        void setDarkestSecret(const std::string& darkest_secret);

        int getIndex() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 04:39:23 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 07:13:26 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# ifndef ICHARACTER_HPP_INCLUDED
#  define ICHARACTER_HPP_INCLUDED
#  include "ICharacter.hpp"
# endif

class   Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inv[4];
    public:
        Character();
        Character(std::string name);
        Character(const Character& cpy);
        Character& operator=(const Character& cpy);
        ~Character();

        std::string const& getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
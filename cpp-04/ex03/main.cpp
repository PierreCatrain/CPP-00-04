/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 03:45:02 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 08:46:57 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp[4];
	tmp[0] = src->createMateria("ice");
	me->equip(tmp[0]);
	tmp[1] = src->createMateria("cure");
	me->equip(tmp[1]);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\nMY TESTS:\n" << std::endl;

	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	tmp[2] = src->createMateria("ice");
	me->equip(tmp[2]);

	tmp[3] = src->createMateria("cure");
	me->equip(tmp[3]);

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;

	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);
    
	delete bob;
	delete src;
	delete me;
    for (int i = 0; i < 3; i++)
    {
        delete tmp[i];
    }
	return 0;
}
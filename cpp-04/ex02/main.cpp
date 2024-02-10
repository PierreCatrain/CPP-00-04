/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 01:14:07 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/10 01:57:13 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "stdlib.h"
#include <iomanip>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "An integer is expected as argument (between 1 and 200)" << std::endl;
		return (1);
	}
	else if (atoi(argv[1]) < 1 || atoi(argv[1]) > 200)
	{
		std::cout << "An integer is expected as argument (between 1 and 200)" << std::endl;
		return (1);
	}

	Cat *cat = new Cat();
	cat->getBrain()->ideas[0] = "blabla";
	cat->getBrain()->ideas[1] = "truc";

	std::cout << std::endl;
	
	for (int i = 0; cat->getBrain()->ideas[i].size() > 0; i++)
		std::cout << cat->getBrain()->ideas[i] << std::endl;
	
	std::cout << std::endl;

	delete cat;

	std::cout << std::endl;

	int nb_animal = atoi(argv[1]);
    Animal *animals[nb_animal];

	// std::cout << std::endl;
	// animals[0] = new Animal();
	// animals[0]->makeSound();
	// delete animals[0];
	// std::cout << std::endl;
	
	for (int i = 0; i < nb_animal; i++)
	{
		if (i < nb_animal / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;

	for (int i = 0; i < nb_animal; i++)
		animals[i]->makeSound();

	std::cout << std::endl;

	for (int i = 0; i < nb_animal; i++)
		delete animals[i];
    return (0);
}
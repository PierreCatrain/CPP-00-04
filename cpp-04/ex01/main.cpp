/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:40:16 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 06:18:36 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[100];

	for (int i = 0; i < 100; i++) {
		if (i < 100 / 2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < 100; i++) {
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < 100; i++) {
		delete animals[i];
	}
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picatrai <picatrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:46:59 by picatrai          #+#    #+#             */
/*   Updated: 2024/02/09 03:05:22 by picatrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    Animal meta;
    Dog j;
    Cat i;
    std::cout << j.getType() << " " << std::endl;
    std::cout << i.getType() << " " << std::endl;
    i.makeSound(); //will output the cat sound!
    j.makeSound();
    meta.makeSound();
    std::cout << std::endl;
    // delete meta;
    // delete j;
    // delete i;
    return 0;
}
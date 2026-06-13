/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *dog  = new Dog();
	const Animal *cat  = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();

	std::cout << std::endl << "--- WrongAnimal test ---" << std::endl;
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat   = new WrongCat();
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;

	return 0;
}

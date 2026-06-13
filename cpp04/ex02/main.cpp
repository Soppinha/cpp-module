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
#include <iostream>

int main(void)
{
	// Animal a; // nao compila: Animal e abstrata

	const int size = 4;
	Animal *animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	for (int i = 0; i < size; i++)
	{
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < size; i++)
		delete animals[i];

	return 0;
}

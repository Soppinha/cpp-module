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
	const int size = 4;
	Animal *animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "--- Deep copy test ---" << std::endl;
	Dog	original;
	original.getBrain()->ideas[0] = "Chasing cars";
	Dog copy(original);
	std::cout << "Original idea: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "Copy idea:     " << copy.getBrain()->ideas[0] << std::endl;
	copy.getBrain()->ideas[0] = "Eating food";
	std::cout << "After modifying copy:" << std::endl;
	std::cout << "Original idea: " << original.getBrain()->ideas[0] << std::endl;
	std::cout << "Copy idea:     " << copy.getBrain()->ideas[0] << std::endl;

	std::cout << std::endl << "--- Cleanup ---" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];

	return 0;
}

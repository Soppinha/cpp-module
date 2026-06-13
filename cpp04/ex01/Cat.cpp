/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal(), _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const { return _brain; }

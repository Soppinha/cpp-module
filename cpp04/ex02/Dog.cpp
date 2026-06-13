/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal(), _brain(new Brain())
{
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const { return _brain; }

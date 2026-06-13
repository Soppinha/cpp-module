/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
}

Character::Character(Character const &other) : _name(other._name)
{
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			delete _slots[i];
			if (other._slots[i])
				_slots[i] = other._slots[i]->clone();
			else
				_slots[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _slots[i];
}

std::string const &Character::getName() const { return _name; }

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i] == NULL)
		{
			_slots[i] = m;
			return;
		}
	}
	std::cout << "Character " << _name << " has no free slots!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return;
	_slots[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || _slots[idx] == NULL)
		return;
	_slots[idx]->use(target);
}

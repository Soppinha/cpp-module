/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_learned[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	for (int i = 0; i < 4; i++)
		_learned[i] = NULL;
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete _learned[i];
			if (other._learned[i])
				_learned[i] = other._learned[i]->clone();
			else
				_learned[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _learned[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i] == NULL)
		{
			_learned[i] = m;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i] && _learned[i]->getType() == type)
			return _learned[i]->clone();
	}
	return NULL;
}

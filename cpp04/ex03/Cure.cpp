/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}
Cure::Cure(Cure const &other) : AMateria(other) {}
Cure &Cure::operator=(Cure const &other) { AMateria::operator=(other); return *this; }
Cure::~Cure() {}

AMateria *Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

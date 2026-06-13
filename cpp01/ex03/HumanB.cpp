/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:38:24 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/09 20:58:10 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (!weapon)
	{
		std::cout << name << " has no weapon" << std::endl;
		return;
	}
		
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

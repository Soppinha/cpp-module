/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
		return;
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

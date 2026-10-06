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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- Teste basico ---" << std::endl;
	{
		FragTrap frag("Frag");
		ScavTrap scav("Scav");

		frag.attack("enemy");
		frag.takeDamage(30);
		frag.beRepaired(10);
		frag.highFivesGuys();

		scav.attack("enemy");
		scav.takeDamage(30);
		scav.beRepaired(10);
		scav.guardGate();
	}

	std::cout << std::endl << "--- Teste de morte ---" << std::endl;
	{
		FragTrap frag("Doomed");

		frag.takeDamage(150);
		frag.attack("enemy");
		frag.beRepaired(10);
		frag.highFivesGuys();
	}

	std::cout << std::endl << "--- Teste de energia ---" << std::endl;
	{
		FragTrap tired("Tired");

		for (int i = 0; i < 100; i++)
			tired.attack("dummy");
		tired.attack("dummy");
		tired.beRepaired(1);
	}

	std::cout << std::endl << "--- Teste default e copia ---" << std::endl;
	{
		FragTrap def;
		def.highFivesGuys();

		FragTrap original("Original");
		original.takeDamage(40);

		FragTrap copy(original);
		copy.attack("enemy");

		FragTrap assigned;
		assigned = original;
		assigned.beRepaired(5);
	}

	return 0;
}

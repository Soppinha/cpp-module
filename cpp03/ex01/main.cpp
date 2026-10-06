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
#include <iostream>

int main(void)
{
	std::cout << "--- Teste basico ---" << std::endl;
	{
		ScavTrap scav("Scout");

		scav.attack("enemy");
		scav.takeDamage(50);
		scav.beRepaired(20);
		scav.guardGate();
		scav.takeDamage(200);
		scav.attack("enemy");
		scav.beRepaired(10);
	}

	std::cout << std::endl << "--- Teste de energia ---" << std::endl;
	{
		ScavTrap tired("Tired");

		for (int i = 0; i < 50; i++)
			tired.attack("dummy");
		tired.attack("dummy");
		tired.beRepaired(1);
	}

	std::cout << std::endl << "--- Teste default e copia ---" << std::endl;
	{
		ScavTrap def;
		def.attack("enemy");

		ScavTrap original("Original");
		original.takeDamage(30);

		ScavTrap copy(original);
		copy.attack("enemy");

		ScavTrap assigned;
		assigned = original;
		assigned.beRepaired(5);
	}

	return 0;
}

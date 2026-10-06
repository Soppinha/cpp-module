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

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- Teste basico ---" << std::endl;
	{
		ClapTrap clap("Clappy");

		clap.attack("enemy");
		clap.takeDamage(3);
		clap.beRepaired(5);
		clap.takeDamage(20);
		clap.attack("enemy");
		clap.beRepaired(5);
		clap.takeDamage(1);
	}

	std::cout << std::endl << "--- Teste de energia ---" << std::endl;
	{
		ClapTrap tired("Tired");

		for (int i = 0; i < 10; i++)
			tired.attack("dummy");
		tired.attack("dummy");
		tired.beRepaired(1);
	}

	std::cout << std::endl << "--- Teste de copia ---" << std::endl;
	{
		ClapTrap original("Original");
		original.takeDamage(4);

		ClapTrap copy(original);
		copy.attack("enemy");

		ClapTrap assigned;
		assigned = original;
		assigned.beRepaired(2);
	}

	return 0;
}

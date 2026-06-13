/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:33:36 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/09 19:06:20 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main ( int ac, char **av )
{
	if (ac < 2)
		return 1;
	
	Zombie* horde = zombieHorde(5, av[1]);

	if (!horde)
		return 1;

    for (int i = 0; i < 5; i++)
        horde[i].announce();

    delete[] horde;
	return 0;
}
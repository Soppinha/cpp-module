/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:41:46 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/09 17:25:43 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main (int ac, char **av)
{
	if (ac < 2)
		return 1;
		
	Zombie* zombie_heap = newZombie(av[1]);

	zombie_heap->announce();
	randomChump(av[1]);

	delete zombie_heap;
	return 0;
}
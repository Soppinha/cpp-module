/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:34:21 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/09 18:44:04 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}

	return horde;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:32:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/08 15:32:01 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return 0;
	}
	else 
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);
		}
		std::cout << '\n';
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/10/06 03:11:27 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << "\n--- testes extras ---" << std::endl;
	
	a.setRawBits(42);
	
	int	rawA = a.getRawBits();
	int	rawB = b.getRawBits();
	int	rawC = c.getRawBits();
	std::cout << "a depois de setRawBits(42): " << rawA << std::endl;
	
	std::cout << "b continua: " << rawB << std::endl;
	std::cout << "c continua: " << rawC << std::endl;

	return 0;
}

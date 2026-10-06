/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/10/06 03:12:02 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "\n--- testes extras ---" << std::endl;
	std::cout << std::boolalpha;

	Fixed	c(10);
	Fixed	d(2.5f);

	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "\n[contas]" << std::endl;
	std::cout << "c + d = " << (c + d) << " (esperado: 12.5)" << std::endl;
	std::cout << "c - d = " << (c - d) << " (esperado: 7.5)" << std::endl;
	std::cout << "c * d = " << (c * d) << " (esperado: 25)" << std::endl;
	std::cout << "c / d = " << (c / d) << " (esperado: 4)" << std::endl;


	std::cout << "\n[comparacoes]" << std::endl;
	std::cout << "c >  d : " << (c > d) << std::endl;
	std::cout << "c <  d : " << (c < d) << std::endl;
	std::cout << "c >= d : " << (c >= d) << std::endl;
	std::cout << "c <= d : " << (c <= d) << std::endl;
	std::cout << "c == d : " << (c == d) << std::endl;
	std::cout << "c != d : " << (c != d) << std::endl;
	std::cout << "c == Fixed(10) : " << (c == Fixed(10)) << std::endl;

	std::cout << "\n[decremento]" << std::endl;
	Fixed	e;
	std::cout << "e   = " << e << std::endl;
	std::cout << "--e = " << --e << " (ja diminuiu)" << std::endl;
	std::cout << "e-- = " << e-- << " (mostra o antigo)" << std::endl;
	std::cout << "e   = " << e << " (agora diminuiu)" << std::endl;


	std::cout << "\n[min e max]" << std::endl;
	std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;
	
	std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
	
	std::cout << "depois de ++max(c, d), c = " << c << std::endl;

	return 0;
}

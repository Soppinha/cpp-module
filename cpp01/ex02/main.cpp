/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:11:33 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/09 19:29:54 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main( void )
{
	std::string  s = "HI THIS IS BRAIN";
	std::string* stringPTR = &s;
	std::string& stringREF = s;

	std::cout << "addr s   : " << &s << std::endl;
	std::cout << "addr PTR : " << stringPTR << std::endl;
	std::cout << "addr REF : " << &stringREF << std::endl;

	std::cout << "valor s   : " << s << std::endl;
	std::cout << "valor PTR : " << *stringPTR << std::endl;
	std::cout << "valor REF : " << stringREF << std::endl;
	return 0;
}
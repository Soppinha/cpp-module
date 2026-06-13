/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 17:34:50 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/09 17:20:43 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Type one of the following - ADD | SEARCH | EXIT: ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			std::cout << "------------------------------------------------------------" << std::endl;
			phonebook.addContact();
			std::cout << "------------------------------------------------------------" << std::endl;
		}
		else if (command == "SEARCH")
		{
			std::cout << "------------------------------------------------------------" << std::endl;
			phonebook.searchContact();
			std::cout << "------------------------------------------------------------" << std::endl;
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Unknown command." << std::endl;
	}
	return 0;
}

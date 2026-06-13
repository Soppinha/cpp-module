/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 18:14:46 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/08 21:29:17 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {}

static std::string truncate(std::string s)
{
	if (s.length() > 10)
		return s.substr(0, 9) + ".";
	return s;
}

static void readField(const std::string &prompt, std::string &out)
{
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, out);
		if (!out.empty())
			return;
		std::cout << "Field cannot be empty." << std::endl;
	}
}

void PhoneBook::addContact()
{
	std::string input;
	int slot = count % 8;

	readField("First Name: ", input);
	contact_list[slot].setFirstName(input);

	readField("Last Name: ", input);
	contact_list[slot].setLastName(input);

	readField("Nick Name: ", input);
	contact_list[slot].setNickname(input);

	readField("Phone Number: ", input);
	contact_list[slot].setPhoneNumber(input);

	readField("Darkest Secret: ", input);
	contact_list[slot].setDarkestSecret(input);

	count++;
}

void PhoneBook::searchContact()
{
	int total = count < 8 ? count : 8;

	if (total == 0)
	{
		std::cout << "No contacts found." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "ID" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICK NAME" << std::endl;

	for (int i = 0; i < total; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncate(contact_list[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(contact_list[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncate(contact_list[i].getNickName()) << std::endl;
	}

	int index;
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "Enter an ID: ";
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Invalid ID." << std::endl;
		return;
	}
	std::cin.ignore();

	if (index < 1 || index > total)
	{
		std::cout << "Invalid ID." << std::endl;
		return;
	}
	Contact &contact_obj = contact_list[index - 1];
	std::cout << contact_obj.getFirstName() << std::endl;
	std::cout << contact_obj.getLastName() << std::endl;
	std::cout << contact_obj.getNickName() << std::endl;
	std::cout << contact_obj.getPhoneNumber() << std::endl;
	std::cout << contact_obj.getDarkestSecret() << std::endl;
}
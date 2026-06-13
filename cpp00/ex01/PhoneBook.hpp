/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:31:53 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/08 19:22:30 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact_list[8];
		int count;

	public:
		PhoneBook();
		void addContact();
		void searchContact();
};

#endif
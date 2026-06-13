/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 16:08:07 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/08 17:38:57 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const
{
    return first_name;
}

std::string Contact::getLastName() const
{
	return last_name;
}

std::string Contact::getNickName() const
{
	return nickname;
}

std::string Contact::getPhoneNumber() const
{
	return phone_number;
}

std::string Contact::getDarkestSecret() const
{
	return darkest_secret;
}

void Contact::setFirstName(const std::string& first)
{
	first_name = first;
}

void Contact::setLastName(const std::string& last)
{
	last_name = last;
}

void Contact::setNickname(const std::string& nick)
{
	nickname = nick;
}

void Contact::setPhoneNumber(const std::string& number)
{
	phone_number = number;
}

void Contact::setDarkestSecret(const std::string& secret)
{
	darkest_secret = secret;
}
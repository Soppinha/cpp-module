/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:33:16 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/08 21:17:52 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
		
		void setFirstName(const std::string& first);
        void setLastName(const std::string& last);
        void setNickname(const std::string& nick);
        void setPhoneNumber(const std::string& number);
        void setDarkestSecret(const std::string& secret);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:37:10 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/09 20:31:11 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string& getType() const;
		void setType(const std::string& type);

	private:
		std::string type;
};

#endif

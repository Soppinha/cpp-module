/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:37:17 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/09 20:36:23 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack();
	
	private:
		std::string name;
		Weapon& weapon;
};

#endif

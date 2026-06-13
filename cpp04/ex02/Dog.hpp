/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(Dog const &other);
		Dog &operator=(Dog const &other);
		~Dog();

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif

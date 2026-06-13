/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &other);
		Point &operator=(const Point &other);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

#endif

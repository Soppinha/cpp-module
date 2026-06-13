/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed cross(Point const p1, Point const p2, Point const p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
		- (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1 = cross(point, a, b);
	Fixed d2 = cross(point, b, c);
	Fixed d3 = cross(point, c, a);

	bool has_neg = (d1 < Fixed(0)) || (d2 < Fixed(0)) || (d3 < Fixed(0));
	bool has_pos = (d1 > Fixed(0)) || (d2 > Fixed(0)) || (d3 > Fixed(0));

	if (has_neg && has_pos)
		return false;
	return (d1 != Fixed(0)) && (d2 != Fixed(0)) && (d3 != Fixed(0));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(5.0f, 10.0f);

	std::cout << "Inside (5, 3): "   << (bsp(a, b, c, Point(5.0f, 3.0f))   ? "yes" : "no") << std::endl;
	std::cout << "Inside (0, 0): "   << (bsp(a, b, c, Point(0.0f, 0.0f))   ? "yes" : "no") << std::endl;
	std::cout << "Inside (5, 0): "   << (bsp(a, b, c, Point(5.0f, 0.0f))   ? "yes" : "no") << std::endl;
	std::cout << "Inside (20, 5): "  << (bsp(a, b, c, Point(20.0f, 5.0f))  ? "yes" : "no") << std::endl;
	std::cout << "Inside (5, 9.9): " << (bsp(a, b, c, Point(5.0f, 9.9f))   ? "yes" : "no") << std::endl;

	return 0;
}

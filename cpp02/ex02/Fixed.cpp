/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaladar <svaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:00:00 by svaladar          #+#    #+#             */
/*   Updated: 2026/06/10 17:00:00 by svaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _rawBits(0) {}

Fixed::Fixed(const int n) : _rawBits(n << _fractBits) {}

Fixed::Fixed(const float n) : _rawBits(static_cast<int>(roundf(n * (1 << _fractBits)))) {}

Fixed::Fixed(const Fixed &other) { *this = other; }

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_rawBits = other._rawBits;
	return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const { return _rawBits; }

void Fixed::setRawBits(int const raw) { _rawBits = raw; }

float Fixed::toFloat(void) const
{
	return static_cast<float>(_rawBits) / (1 << _fractBits);
}

int Fixed::toInt(void) const { return _rawBits >> _fractBits; }

bool Fixed::operator>(const Fixed &other) const { return _rawBits > other._rawBits; }
bool Fixed::operator<(const Fixed &other) const { return _rawBits < other._rawBits; }
bool Fixed::operator>=(const Fixed &other) const { return _rawBits >= other._rawBits; }
bool Fixed::operator<=(const Fixed &other) const { return _rawBits <= other._rawBits; }
bool Fixed::operator==(const Fixed &other) const { return _rawBits == other._rawBits; }
bool Fixed::operator!=(const Fixed &other) const { return _rawBits != other._rawBits; }

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result._rawBits = _rawBits + other._rawBits;
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result._rawBits = _rawBits - other._rawBits;
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result._rawBits = static_cast<int>(
		(static_cast<long long>(_rawBits) * other._rawBits) >> _fractBits);
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result._rawBits = static_cast<int>(
		(static_cast<long long>(_rawBits) << _fractBits) / other._rawBits);
	return result;
}

Fixed &Fixed::operator++(void)
{
	_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_rawBits++;
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	_rawBits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_rawBits--;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; }

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:51 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/16 18:03:42 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(const int integer)
{
	this->number = integer << nb_bits;
}
Fixed::Fixed(const float number)
{
	this->number = roundf(number * (1 << nb_bits));
}

int Fixed::toInt(void) const
{
	return (number >> nb_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)number / (1 << nb_bits));
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
}

Fixed::Fixed()
{
	number = 0;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &other)
{
	if (this != &other)
	{
		this->number = other.number;
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (number);
}

void Fixed::setRawBits(int const raw)
{
	number = raw;
}

std::ostream &operator<<(std::ostream &os, Fixed const &other)
{
	os << other.toFloat();
	return (os);
}

bool Fixed::operator>(Fixed const &other) const
{
	return (number > other.number);
}

bool Fixed::operator<(Fixed const &other) const
{
	return (number < other.number);
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (number >= other.number);
}
bool Fixed::operator<=(Fixed const &other) const
{
	return (number <= other.number);
}
bool Fixed::operator==(Fixed const &other) const
{
	return (number == other.number);
}
bool Fixed::operator!=(Fixed const &other) const
{
	return (number != other.number);
}
Fixed Fixed::operator+(Fixed const &other) const
{
	float tmp = toFloat();
	float tmp2 = other.toFloat();
	float sum = tmp + tmp2;
	return (Fixed(sum));
}
Fixed Fixed::operator-(Fixed const &other) const
{
	float tmp = toFloat();
	float tmp2 = other.toFloat();
	float sum = tmp - tmp2;
	return (Fixed(sum));
}
Fixed Fixed::operator*(Fixed const &other) const
{
	float tmp = toFloat();
	float tmp2 = other.toFloat();
	float sum = tmp * tmp2;
	return (Fixed(sum));
}
Fixed Fixed::operator/(Fixed const &other) const
{
	float tmp = toFloat();
	float tmp2 = other.toFloat();
	float sum = tmp / tmp2;
	return (Fixed(sum));
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	number += 1;
	return (tmp);
}
Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	number -= 1;
	return (tmp);
}
Fixed &Fixed::operator++()
{
	number += 1;
	return (*this);
}
Fixed &Fixed::operator--()
{
	number -= 1;
	return (*this);
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.operator<(b))
		return (a);
	else
		return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.operator>(b))
		return (a);
	else
		return (b);
}
const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.operator<(b))
		return (a);
	else
		return (b);
}
const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.operator>(b))
		return (a);
	else
		return (b);
}
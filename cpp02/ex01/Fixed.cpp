/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:51 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/13 13:23:08 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = integer << nb_bits;
}
Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
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
	std::cout << "Copy constructor called" << std::endl;
	
	*this = other;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	number = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->number = other.number;
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

void Fixed ::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called" << std::endl;
	number = raw;
}

std::ostream &operator<<(std::ostream &os, Fixed const &other)
{
	os << other.toFloat();
	return (os);
}
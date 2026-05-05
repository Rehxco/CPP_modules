/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:08:03 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/05 16:58:43 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor called" << std::endl;
	type = "Default";
}
WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << type << " constructor called" << std::endl;
	this->type = type;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		type = other.type;
	}
	return (*this);
}
void WrongAnimal::makeSound(void) const
{
	std::cout << type << " does this sound: " << std::endl;
}
std::string WrongAnimal::getType() const
{
	return (type);
}
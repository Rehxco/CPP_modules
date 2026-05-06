/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:51 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/05 16:58:07 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
	type = "Default";
}
Animal::Animal(Animal const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
Animal::Animal(std::string type)
{
	std::cout << type << " constructor called" << std::endl;
	this->type = type;
}
Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}
Animal &Animal::operator=(Animal const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		type = other.type;
	}
	return (*this);
}
void Animal::makeSound(void) const
{
	std::cout << type << " does this sound: " << std::endl;
}
std::string Animal::getType() const
{
	return (type);
}
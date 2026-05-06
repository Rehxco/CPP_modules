/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:56:31 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/06 12:12:50 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor called in Dog" << std::endl;
	type = "Dog";
	brain = new Brain();
}
Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "Copy constructor called in Dog" << std::endl;
	brain = new Brain();
	*brain = *other.brain;
}
Dog::~Dog()
{
	delete	brain;

	std::cout << "Destructor called in Dog" << std::endl;
}
Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called in Dog" << std::endl;
		type = other.type;
		*brain = *other.brain;
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << type << " make this noise: ouuuuuuaffff" << std::endl;
}
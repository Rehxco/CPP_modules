/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:56:27 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/05 16:58:37 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor called in Cat" << std::endl;
	type = "Cat";
}
Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "Copy constructor called in Cat" << std::endl;
	*this = other;
}
Cat::~Cat()
{
	std::cout << "Destructor called in Cat" << std::endl;
}
Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called in Cat" << std::endl;
		type = other.type;
	}
	return (*this);
}
void Cat::makeSound(void) const
{
	std::cout << type << " make this noise: miiiiiiiiiaouuuu" << std::endl;
}
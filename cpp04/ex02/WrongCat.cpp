/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:08:08 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/19 14:32:52 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor called in WrongCat" << std::endl;
	type = "WrongCat";
}
WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
	std::cout << "Copy constructor called in WrongCat" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "Destructor called in WrongCat" << std::endl;
}
WrongCat &WrongCat::operator=(WrongCat const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called in WrongCat" << std::endl;
		type = other.type;
	}
	return (*this);
}
void WrongCat::makeSound(void) const
{
	std::cout << type << " make this noise: miiiiiiiiiaouuuu" << std::endl;
}
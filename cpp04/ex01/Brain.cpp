/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:04:24 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/06 11:07:36 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain called" << std::endl;
}
Brain::Brain(Brain const &other)
{
	std::cout << "Copy Brain called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain called" << std::endl;
}
Brain &Brain::operator=(Brain const &other)
{
	int i = 0;
	if (this != &other)
	{
		std::cout << "Copy assignment operator of Brain called" << std::endl;
		while (i < 100)
		{
			ideas[i] = other.ideas[i];
			i++;
		}
	}
	return (*this);
}
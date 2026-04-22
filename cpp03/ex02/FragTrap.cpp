/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:17:03 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/22 17:42:40 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called in FragTrap" << std::endl;
	attack_damage = 30;
	health_p = 100;
	energy_p = 100;
	name = "Default";
}
FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "Copy constructor called in FragTrap" << std::endl;
	*this = other;
}
FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << name << " constructor called in FragTrap" << std::endl;
	attack_damage = 30;
	health_p = 100;
	energy_p = 100;
}
FragTrap::~FragTrap()
{
	std::cout << "Destructor called in FragTrap" << std::endl;
}
FragTrap &FragTrap::operator=(FragTrap const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called in FragTrap" << std::endl;
		attack_damage = other.attack_damage;
		health_p = other.health_p;
		energy_p = other.energy_p;
		name = other.name;
	}
	return (*this);
}
void FragTrap::attack(const std::string &target)
{
	if (energy_p > 0 && health_p > 0)
	{
		energy_p -= 1;
		std::cout << name << " attacked " << target << " with " << attack_damage << " points of damages" << std::endl;
	}
	else
		std::cout << "Error: Your energy points or health points are at 0" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Do you want to give a high five?" << std::endl;
}
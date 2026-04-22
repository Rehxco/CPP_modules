/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:17:07 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/22 17:46:58 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called in ScavTrap" << std::endl;
	attack_damage = 20;
	health_p = 100;
	energy_p = 50;
	name = "Default";
}
ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other)
{
	std::cout << "Copy constructor called in ScavTrap" << std::endl;
	*this = other;
}
ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << name << " constructor called in ScavTrap" << std::endl;
	attack_damage = 20;
	health_p = 100;
	energy_p = 50;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called in ScavTrap" << std::endl;
}
ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called in ScavTrap" << std::endl;
		attack_damage = other.attack_damage;
		health_p = other.health_p;
		energy_p = other.energy_p;
		name = other.name;
	}
	return (*this);
}
void ScavTrap::attack(const std::string &target)
{
	if (energy_p > 0 && health_p > 0)
	{
		energy_p -= 1;
		std::cout << name << " attacked " << target << " with " << attack_damage << " points of damages" << std::endl;
	}
	else
		std::cout << "Error: Your energy points or health points are at 0" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << name << " is in Gate keeper mode" << std::endl;
}
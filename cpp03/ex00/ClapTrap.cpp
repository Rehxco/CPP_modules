/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:51 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/21 18:03:50 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	attack_damage = 0;
	health_p = 10;
	energy_p = 10;
	name = "Default";
}
ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << name << " constructor called" << std::endl;
	attack_damage = 0;
	health_p = 10;
	energy_p = 10;
	this->name = name;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		attack_damage = other.attack_damage;
		health_p = other.health_p;
		energy_p = other.energy_p;
		name = other.name;
	}
	return (*this);
}
void ClapTrap::attack(const std::string &target)
{
	if (energy_p > 0 && health_p > 0)
	{
		energy_p -= 1;
		std::cout << name << " attacked " << target << " with  " << attack_damage << " damages" << std::endl;
	}
	else
		std::cout << "Error: Your energy points or health points are at 0" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount >= health_p)
		health_p = 0;
	else
		health_p -= amount;
	std::cout << name << " received " << amount << " attack damage and has " << health_p << " health points remaining" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_p > 0 && health_p > 0)
	{
		energy_p -= 1;
		health_p += amount;
		std::cout << name << " has recovered " << amount << " health points and has " << health_p << " health points remaining" << std::endl;
	}
	else
		std::cout << "Error: Your energy points or health points are at 0" << std::endl;
}

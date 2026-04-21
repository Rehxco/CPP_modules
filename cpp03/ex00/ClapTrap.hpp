/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:45 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/21 17:21:08 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
# include <iostream>


class ClapTrap
{
  public:
	ClapTrap();
	ClapTrap(ClapTrap const &other);
	ClapTrap(std::string const &name);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const &other);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

  protected:
	std::string name;
	int health_p;
	int energy_p;
	int attack_damage;
};

#endif
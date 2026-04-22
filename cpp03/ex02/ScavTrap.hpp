/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:17:01 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/21 18:57:11 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap();
	ScavTrap(ScavTrap const &other);
	ScavTrap(std::string const &name);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &other);
	void attack(const std::string &target);
	void guardGate();
};

#endif
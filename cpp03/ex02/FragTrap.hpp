/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:17:09 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/22 17:57:46 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
  public:
	FragTrap();
	FragTrap(FragTrap const &other);
	FragTrap(std::string const &name);
	~FragTrap();
	FragTrap &operator=(FragTrap const &other);
	void attack(const std::string &target);
	void highFivesGuys(void);
};

#endif
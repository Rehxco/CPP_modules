/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:34:12 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/09 15:40:39 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <cstdlib>
# include <iomanip>
# include <iostream>

class Weapon
{
  public:
	const std::string &getType();
	void setType(std::string tmp);
	Weapon(std::string type);

  private:
	std::string type;
};

#endif
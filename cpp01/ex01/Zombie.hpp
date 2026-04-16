/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:34:12 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/05 13:51:58 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <cstdlib>
# include <iomanip>
# include <iostream>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();
	void setterName(std::string name);
};
Zombie	*zombieHorde(int N, std::string name);

#endif
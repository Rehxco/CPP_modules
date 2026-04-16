/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:34:35 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/05 13:57:21 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *tab_zombie = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		tab_zombie[i].setterName(name); 
	}
	return(tab_zombie);
}
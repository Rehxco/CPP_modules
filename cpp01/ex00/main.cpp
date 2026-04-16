/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:27:21 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/04 15:36:32 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *my_zombie;
	randomChump("Max");
	my_zombie = newZombie("Salome");
	my_zombie->announce();
	delete my_zombie;
}
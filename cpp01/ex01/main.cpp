/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:27:21 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/05 14:09:44 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *tab_zombie;

	int N = 5;
	tab_zombie = zombieHorde(N, "Salome");
	for (int i = 0; i < N; i++)
	{
		tab_zombie[i].announce();
	}
	delete[] tab_zombie;
}
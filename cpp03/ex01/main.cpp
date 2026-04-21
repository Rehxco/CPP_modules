/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:40:06 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/21 18:07:37 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap hero("Harry Potter");
	ClapTrap villain("Voldemort");

	villain.attack("Harry Potter");
	hero.takeDamage(5);
	hero.beRepaired(2);
	return (0);
}
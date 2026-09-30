/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:04:34 by sbrochar          #+#    #+#             */
/*   Updated: 2026/09/30 12:19:44 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	BitcoinExchange	btc;

	if (ac < 2)
		return (std::cerr << "Error: could not open file" << std::endl, 1);
	if (!btc.loadDatabase("data.csv"))
		return (1);
	btc.processInput(av[1]);
	return (0);
}

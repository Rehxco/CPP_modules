/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:04:34 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/25 20:54:41 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if(ac < 2)
	return(std::cerr << "Error: could not open file" << std::endl, 1);
	BitcoinExchange btc;
	btc.loadDatabase("data.csv");
	btc.processInput(av[1]);
	return(0);
}

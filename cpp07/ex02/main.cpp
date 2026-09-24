/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:39:16 by sbrochar          #+#    #+#             */
/*   Updated: 2026/09/24 17:48:01 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

#define MAX_VAL 750

int	main(int ac, char **av)
{
	Array<std::string> str(ac - 1);
	for (unsigned int i = 0; i < str.size(); i++)
		str[i] = av[i + 1];
	for (unsigned int i = 0; i < str.size(); i++)
		std::cout << str[i] << std::endl;
	try
	{
		str[ac] = "Boom";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Test with (int)" << std::endl;
	Array<int> n(5);
	for (unsigned int i = 0; i < n.size(); i++)
		n[i] = i * 10;
	for (unsigned int i = 0; i < n.size(); i++)
		std::cout << n[i] << std::endl;
	
	return (0);
}
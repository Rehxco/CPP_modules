/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:40:06 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/24 16:33:10 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if(ac < 2)
	{
		std::cout << "Bad number argument" << std::endl;
		return(1);
	}
	ScalarConverter::convert(av[1]);
	return(0);
}

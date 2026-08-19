/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:04:34 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/17 19:37:05 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int	main(void)
{
	std::vector<int> vector;
	std::list<int> list;
	vector.push_back(27);
	vector.push_back(12);
	vector.push_back(01);
	vector.push_back(11);
	vector.push_back(07);
	vector.push_back(26);
	list.push_back(01);
	list.push_back(11);
	list.push_back(02);
	try
	{
		std::vector<int>::iterator it;
		it = easyfind(vector, 27);
		std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int>::iterator it;
		it = easyfind(vector, 42);
		std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::list<int>::iterator it;
		it = easyfind(list, 02);
		std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::list<int>::iterator it;
		it = easyfind(list, 42);
		std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

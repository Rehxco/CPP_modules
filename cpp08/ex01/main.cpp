/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:04:34 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/20 17:26:16 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <list>
#include <vector>

int	main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		sp.addNumber(42);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp2 = Span(1);
		sp2.addNumber(42);
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int> vect_test;
	for (int i = 0; i < 10000; i++)
		vect_test.push_back(i);
	Span test = Span(10000);
	test.addNumber(vect_test.begin(), vect_test.end());
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;
	return (0);
}
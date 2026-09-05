/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:04:34 by sbrochar          #+#    #+#             */
/*   Updated: 2026/09/05 18:28:07 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

int	main(int ac, char **av)
{
	struct timeval	start;
	struct timeval	end;
	PmergeMe		test;
	double			time_vect;
	double			time_deque;

	if (ac < 2)
		return (std::cerr << "Error" << std::endl, 1);
	if (test.parsArg(ac, av) == false)
		return (1);
	std::cout << "Before: ";
	test.displayVect();
	gettimeofday(&start, NULL);
	test.vecAlg();
	gettimeofday(&end, NULL);
	time_vect = ((end.tv_sec - start.tv_sec) * 1000000.0) + (end.tv_usec
			- start.tv_usec);
	gettimeofday(&start, NULL);
	test.dequeAlg();
	gettimeofday(&end, NULL);
	time_deque = ((end.tv_sec - start.tv_sec) * 1000000.0) + (end.tv_usec
			- start.tv_usec);
	std::cout << "After: ";
	test.displayVect();
	std::cout << "Time to process a range of " << ac
		- 1 << " elements with std::vector : " << std::fixed << std::setprecision(5) << time_vect << " us" << std::endl;
	std::cout << "Time to process a range of " << ac
		- 1 << " elements with std::deque : " << std::fixed << std::setprecision(5) << time_deque << " us" << std::endl;
	return (0);
}

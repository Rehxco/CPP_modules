/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:04:34 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/05 23:00:56 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>

void print(T &tmp)
{
	std::cout << tmp << " ";
}

int	main(void)
{
	static int test_array[] = {1, 2, 3, 4, 5};
	::iter(test_array, 5, print);
	std::string test_string[] = {"Hello", "Sam", "Teemo"};
	::iter(test_string, 3, print);
	return (0);
}

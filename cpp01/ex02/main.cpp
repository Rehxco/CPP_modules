/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:27:21 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/05 15:13:33 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Here is the memory address of str " << &str << std::endl;
	std::cout << "Here is the memory address of stringPTR " << stringPTR << std::endl;
	std::cout << "Here is the memory address of stringREF " << &stringREF << std::endl;
	std::cout << "And the value of of str " << str << std::endl;
	std::cout << "And the value of stringPTR " << *stringPTR << std::endl;
	std::cout << "And the value of stringREF " << stringREF << std::endl;
}
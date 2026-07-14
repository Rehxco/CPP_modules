/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:40:06 by sbrochar          #+#    #+#             */
/*   Updated: 2026/06/01 19:36:05 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	try
	{
		Bureaucrat God("God", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Sub_fifre("Man fired", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Employee("Employee", 15);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Promotion("Bob", 84);
		Promotion.up_rank();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Bad("Bobby", 84);
		Bad.down_rank();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat Bad("Bobby", 84);
	std::cout << Bad << std::endl;
	Form Wedding("\"Wedding with Maria\"", 2, 1);
	std::cout << Wedding << std::endl;
	Bad.signForm(Wedding);
	Bureaucrat Boss("Charlie", 1);
	Boss.signForm(Wedding);
	std::cout << Wedding << std::endl;
}

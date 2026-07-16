/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:40:06 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/16 17:22:35 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int	main(void)
{
	srand(time(NULL));
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
	std::cout << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << "Test PresidentialPardonForm" << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << std::endl;
	Bureaucrat Bad("Bobby", 150);
	std::cout << Bad << std::endl;
	PresidentialPardonForm ContractPresidential("Obama");
	std::cout << ContractPresidential << std::endl;
	Bad.signForm(ContractPresidential);
	Bad.executeForm(ContractPresidential);
	Bureaucrat Boss("Charlie", 1);
	Boss.signForm(ContractPresidential);
	Boss.executeForm(ContractPresidential);
	std::cout << ContractPresidential << std::endl;
	std::cout << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << "Test RobotomyRequestForm" << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << Bad << std::endl;
	RobotomyRequestForm Robot("Bob");
	std::cout << Robot << std::endl;
	Bad.signForm(Robot);
	Bad.executeForm(Robot);
	Boss.signForm(Robot);
	Boss.executeForm(Robot);
	std::cout << Robot << std::endl;
	std::cout << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << "Test ShrubberyCreationForm" << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << Bad << std::endl;
	ShrubberyCreationForm Tree("CentralPark");
	std::cout << Tree << std::endl;
	Bad.signForm(Tree);
	Bad.executeForm(Tree);
	Boss.signForm(Tree);
	Boss.executeForm(Tree);
	std::cout << Tree << std::endl;
	std::cout << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << "Test Intern" << std::endl;
	std::cout << "***********************************************************" << std::endl;
	std::cout << std::endl;
	Intern Billy;
	AForm* test = Billy.makeForm("robotomy request", "Benji");
	if(test != NULL)
	{
		Boss.signForm(*test);
		Boss.executeForm(*test);
		Bad.signForm(*test);
		Bad.executeForm(*test);
	}
	delete test;
	
}

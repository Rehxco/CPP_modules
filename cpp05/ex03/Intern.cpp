/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:14:42 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/16 17:26:55 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Default constructor called to Intern" << std::endl;
}

Intern::Intern(Intern const &other)
{
	std::cout << "Copy constructor called to Intern" << std::endl;
	(void)other;
}

Intern &Intern::operator=(Intern const &other)
{
	if (this != &other)
		std::cout << "Copy assignment operator called to Intern" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor to Intern called" << std::endl;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string tab_name_form[3] = {"presidential pardon", "shrubbery creation",
		"robotomy request"};
	AForm *(Intern::*fonctions[3])(const std::string &) = {&Intern::PresidentialPardon,
		&Intern::ShrubberyCreation, &Intern::RobotomyRequest};
	for (int i = 0; i < 3; i++)
	{
		if (name == tab_name_form[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*fonctions[i])(target);
		}
	}
	std::cout <<  name << " doesn't exist" << std::endl;
	return(NULL);
}
AForm *Intern::PresidentialPardon(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}
AForm *Intern::ShrubberyCreation(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}
AForm *Intern::RobotomyRequest(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}
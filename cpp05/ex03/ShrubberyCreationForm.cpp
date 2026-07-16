/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:35:14 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/15 18:26:14 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",
	145, 137), target("default_target")
{
	std::cout << "Default constructor called to Shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other), target(other.target)
{
	std::cout << "Copy constructor called to Shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "Constructor with " << target << " called" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		std::cout << "Copy assignment operator called to AForm" << std::endl;
		this->target = other.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor to ShrubberyCreationForm called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	if (getForm_Signed() == false)
		throw FormNotSignedException();
	if (bureaucrat.getGrade() > getGrade_Exec())
		throw GradeTooLowException();
	std::ofstream ofs((target + "_shrubbery").c_str());
	if (ofs.is_open() == false)
	{
		std::cerr << "Opening the file failed" << std::endl;
		return ;
	}
	ofs << "     ,,,." << std::endl;
	ofs << "  ,&%%&%&&%," << std::endl;
	ofs << " ,%&\\%&&%&&%," << std::endl;
	ofs << " %&&%&%&/%&&%" << std::endl;
	ofs << " %&&%/ %&%%&&" << std::endl;
	ofs << " `&%\\ ` /%&'" << std::endl;
	ofs << "     |o|    " << std::endl;
	ofs << "     |.|" << std::endl;
	ofs << "  \\\\/ ._\\//_/" << std::endl;
	ofs.close();
}
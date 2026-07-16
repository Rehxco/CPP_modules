/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:34:55 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/15 17:03:48 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72,
	45), target("default_target")
{
	std::cout << "Default constructor called to Robotomy" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other),
	target(other.target)
{
	std::cout << "Copy constructor called to Robotomy" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm",
	72, 45), target(target)
{
	std::cout << "Constructor with " << target << " called" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		std::cout << "Copy assignment operator called to AForm" << std::endl;
		this->target = other.target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor to Robotomy called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	srand(time(NULL));
	if (getForm_Signed() == false)
		throw FormNotSignedException();
	if (bureaucrat.getGrade() > getGrade_Exec())
		throw GradeTooLowException();
	std::cout << "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV" << std::endl;
	if(rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}
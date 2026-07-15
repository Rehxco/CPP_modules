/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:34:50 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/15 17:08:49 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",
	25, 5), target("default_target")
{
	std::cout << "Default constructor called to Presidential" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other),
	target(other.target)
{
	std::cout << "Copy constructor called to Presidential" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm",
	25, 5), target(target)
{
	std::cout << "Constructor with " << target << " called" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		std::cout << "Copy assignment operator called to Presidential" << std::endl;
		this->target = other.target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor to Presidential called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	if (getForm_Signed() == false)
		throw FormNotSignedException();
	if (bureaucrat.getGrade() > getGrade_Exec())
		throw GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

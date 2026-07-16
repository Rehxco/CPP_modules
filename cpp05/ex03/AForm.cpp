/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:43:17 by sbrochar          #+#    #+#             */
/*   Updated: 2026/06/04 22:11:46 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


std::string AForm::getName_Form(void) const
{
	return (name);
}

bool AForm::getForm_Signed(void) const
{
	return (form_signed);
}
int AForm::getGrade_Sign(void) const
{
	return (min_grade_for_sign);
}
int AForm::getGrade_Exec(void) const
{
	return (min_grade_for_exec);
}
AForm::AForm(AForm const &other) : name(other.getName_Form()),
	form_signed(other.getForm_Signed()),
	min_grade_for_sign(other.getGrade_Sign()),
	min_grade_for_exec(other.getGrade_Exec())
{
	std::cout << "Copy constructor called to AForm" << std::endl;
}

AForm::AForm() : name("Default"), form_signed(false), min_grade_for_sign(12),
	min_grade_for_exec(90)
{
	std::cout << "Default constructor called to AForm" << std::endl;
}
AForm::AForm(std::string const &name, const int min_grade_for_sign,
	const int min_grade_for_exec) : name(name), form_signed(false),
	min_grade_for_sign(min_grade_for_sign),
	min_grade_for_exec(min_grade_for_exec)
{
	if (min_grade_for_sign < 1 || min_grade_for_exec < 1)
		throw GradeTooHighException();
	else if (min_grade_for_sign > 150 || min_grade_for_exec > 150)
		throw GradeTooLowException();
}
AForm::AForm(std::string const &name) : name(name), form_signed(false),
	min_grade_for_sign(12), min_grade_for_exec(90)
{
	std::cout << "Constructor with " << name << " called of AForm" << std::endl;
}

AForm::~AForm()
{
	std::cout << "Destructor called to AForm" << std::endl;
}

AForm &AForm::operator=(AForm const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called to AForm" << std::endl;
		this->form_signed = other.getForm_Signed();
	}
	return (*this);
}
const char *AForm::GradeTooHighException::what() const throw()
{
	return ("you can't be above the boss, come on");
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return ("have some self-respect and leave this company if you're so low");
}
const char *AForm::FormNotSignedException::what() const throw()
{
	return ("unable to execute the document: the signature is missing.");
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > min_grade_for_sign)
		throw GradeTooLowException();
	form_signed = true;
}

std::ostream &operator<<(std::ostream &os, AForm const &tmp)
{
	os << "The form " << tmp.getName_Form() << " in the state " << tmp.getForm_Signed() << " requires the rank " << tmp.getGrade_Sign() << " to be signed and the rank " << tmp.getGrade_Exec() << " to execute it";
	return (os);
}
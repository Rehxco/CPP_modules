/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:43:17 by sbrochar          #+#    #+#             */
/*   Updated: 2026/06/01 19:25:56 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


std::string Form::getName_Form(void) const
{
	return (name);
}

bool Form::getForm_Signed(void) const
{
	return (form_signed);
}
int Form::getGrade_Sign(void) const
{
	return (min_grade_for_sign);
}
int Form::getGrade_Exec(void) const
{
	return (min_grade_for_exec);
}
Form::Form(Form const &other) : name(other.getName_Form()),
	form_signed(other.getForm_Signed()),
	min_grade_for_sign(other.getGrade_Sign()),
	min_grade_for_exec(other.getGrade_Exec())
{
	std::cout << "Copy constructor called" << std::endl;
}

Form::Form() : name("Default"), form_signed(false), min_grade_for_sign(12),
	min_grade_for_exec(90)
{
	std::cout << "Default constructor called" << std::endl;
}
Form::Form(std::string const &name, const int min_grade_for_sign,
	const int min_grade_for_exec) : name(name), form_signed(false),
	min_grade_for_sign(min_grade_for_sign),
	min_grade_for_exec(min_grade_for_exec)
{
	if (min_grade_for_sign < 1 || min_grade_for_exec < 1)
		throw GradeTooHighException();
	else if (min_grade_for_sign > 150 || min_grade_for_exec > 150)
		throw GradeTooLowException();
}
Form::Form(std::string const &name) : name(name), form_signed(false),
	min_grade_for_sign(12), min_grade_for_exec(90)
{
	std::cout << "Constructor with " << name << " called" << std::endl;
}

Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
}

Form &Form::operator=(Form const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->form_signed = other.getForm_Signed();
	}
	return (*this);
}
const char *Form::GradeTooHighException::what() const throw()
{
	return ("you can't be above the boss, come on");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("have some self-respect and leave this company if you're so low");
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if(bureaucrat.getGrade() > min_grade_for_sign)
		throw GradeTooLowException();
	form_signed = true;
}

std::ostream &operator<<(std::ostream &os, Form const &tmp)
{
	os << "The form " << tmp.getName_Form() << " in the state " << tmp.getForm_Signed() << " requires the rank " << tmp.getGrade_Sign() << " to be signed and the rank " << tmp.getGrade_Exec() << " to execute it";
	return (os);
}
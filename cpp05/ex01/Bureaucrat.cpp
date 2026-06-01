/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:51 by sbrochar          #+#    #+#             */
/*   Updated: 2026/06/01 19:26:05 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

std::string Bureaucrat::getName(void) const
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}
Bureaucrat::Bureaucrat(Bureaucrat const &other) : name(other.getName()),
	grade(other.getGrade())
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->grade = other.getGrade();
	}
	return (*this);
}
Bureaucrat::Bureaucrat(std::string const &name) : name(name), grade(150)
{
	std::cout << "Constructor with " << name << " called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name),
	grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}
void Bureaucrat::up_rank(void)
{
	if (grade <= 1)
		throw GradeTooHighException();
	this->grade--;
	std::cout << "Well done, you're going to earn more money" << std::endl;
}
void Bureaucrat::down_rank(void)
{
	if (grade >= 150)
		throw GradeTooLowException();
	this->grade++;
	std::cout << "You've been demoted, sorry" << std::endl;
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("You can't be above the boss, come on");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Have some self-respect and leave this company if you're so low");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &tmp)
{
	os << tmp.getName() << ", bureaucrat grade " << tmp.getGrade() << ".";
	return (os);
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName_Form() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name << " couldn’t sign " << form.getName_Form() << " because " << e.what() << std::endl;
	}

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:45 by sbrochar          #+#    #+#             */
/*   Updated: 2026/06/01 19:19:47 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
class	Form;

class Bureaucrat
{
  public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat(std::string const &name);
	Bureaucrat(std::string const &name, int grade);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &other);
	std::string getName(void) const;
	int getGrade(void) const;
	void up_rank();
	void down_rank();
	void signForm(Form &form);
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw();

		private:
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw();

		private:
	};

  private:
	std::string const name;
	int grade;
};
std::ostream &operator<<(std::ostream &os, Bureaucrat const &tmp);

#endif
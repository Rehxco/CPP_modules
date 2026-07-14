/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:39:53 by sbrochar          #+#    #+#             */
/*   Updated: 2026/06/01 19:22:01 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
class	Bureaucrat;

class AForm
{
  public:
	AForm();
	AForm(AForm const &other);
	AForm(std::string const &name);
	AForm(std::string const &name, const int min_grade_for_sign,
		const int min_grade_for_exec);
	~AForm();
	AForm &operator=(AForm const &other);
	std::string getName_Form(void) const;
	int getGrade_Sign(void) const;
	int getGrade_Exec(void) const;
	bool getForm_Signed(void) const;
	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(const Bureaucrat &bureaucrat) const = 0;
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
	class FormNotSignedException : public std::exception
	{
		public:
		virtual const char *what() const throw();

		private:
	};

  private:
	std::string const name;
	bool form_signed;
	const int min_grade_for_sign;
	const int min_grade_for_exec;
};
std::ostream &operator<<(std::ostream &os, AForm const &tmp);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:39:53 by sbrochar          #+#    #+#             */
/*   Updated: 2026/06/01 19:22:01 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class	Bureaucrat;

class Form
{
  public:
	Form();
	Form(Form const &other);
	Form(std::string const &name);
	Form(std::string const &name, const int min_grade_for_sign,
		const int min_grade_for_exec);
	~Form();
	Form &operator=(Form const &other);
	std::string getName_Form(void) const;
	int getGrade_Sign(void) const;
	int getGrade_Exec(void) const;
	bool getForm_Signed(void) const;
	void beSigned(const Bureaucrat &bureaucrat);
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
	bool form_signed;
	const int min_grade_for_sign;
	const int min_grade_for_exec;
};
std::ostream &operator<<(std::ostream &os, Form const &tmp);

#endif
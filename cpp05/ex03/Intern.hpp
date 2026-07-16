/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:14:35 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/16 16:07:35 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
class	AForm;

class Intern
{
  public:
	Intern();
	Intern(Intern const &other);
	~Intern();
	Intern &operator=(Intern const &other);
	AForm *makeForm(std::string name, std::string target);

  private:
	AForm *PresidentialPardon(const std::string &target);
	AForm *ShrubberyCreation(const std::string &target);
	AForm *RobotomyRequest(const std::string &target);
};

#endif
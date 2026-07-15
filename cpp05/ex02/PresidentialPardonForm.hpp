/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:34:52 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/15 17:06:12 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
class	Bureaucrat;

class PresidentialPardonForm : public AForm
{
  public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
	virtual void execute(const Bureaucrat &bureaucrat) const;

  private:
	std::string target;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:09 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/23 17:38:28 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>

class ScalarConverter
{
  public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &other);
	ScalarConverter(std::string const &name);
	ScalarConverter(std::string const &name, int grade);
	~ScalarConverter();
	ScalarConverter &operator=(ScalarConverter const &other);

  private:
	std::string const name;
};

#endif
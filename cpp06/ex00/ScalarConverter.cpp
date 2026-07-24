/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:03 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/24 13:10:28 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}
ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
	std::cout << "Copy constructor called" << std::endl;
}
ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called" << std::endl;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	(void)other;
	return (*this);
}

void ScalarConverter::convert(const std::string value)
{
	if (value.compare("nan") == 0)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (value.compare("nanf") == 0)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	else if (value.compare("+inf") == 0)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	else if (value.compare("+inff") == 0)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	else if (value.compare("-inf") == 0)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	else if (value.compare("-inff") == 0)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	else if (value.size() == 1 && (value[0] < '0' || value[0] > '9'))
	{
		
	}
	
}
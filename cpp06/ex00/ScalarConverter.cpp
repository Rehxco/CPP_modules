/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:03 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/24 17:52:38 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}
ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	(void)other;
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
	char	c;
	int		integer;
	float	floating;
	double	number;
	char	*end;
	double	stock_number;

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
		c = value[0];
		integer = static_cast<int>(c);
		floating = static_cast<float>(c);
		number = static_cast<double>(c);
		std::cout << "char : " << c << std::endl;
		std::cout << "int : " << integer << std::endl;
		std::cout << "float : " << floating << std::endl;
		std::cout << "double: " << number << std::endl;
		return ;
	}
	stock_number = strtod(value.c_str(), &end);
	if (*end == '\0' || (*end == 'f' && end[1] == '\0'))
	{
		if(stock_number < 0 || stock_number > 255)
			std::cout << "char : impossible" << std::endl;
		else if (stock_number < 32 || stock_number > 126)
			std::cout << "Non displayable" << std::endl;
		else
			c = static_cast<char>(c);
	}
	else
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

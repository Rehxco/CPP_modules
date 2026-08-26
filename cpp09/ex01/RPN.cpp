/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:12:45 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/26 19:01:42 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <climits>
#include <cstdlib>
#include <stdlib.h>

RPN::RPN(RPN const &other) : _stack(other._stack)
{
}

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN &RPN::operator=(RPN const &other)
{
	if (this != &other)
	{
		_stack = other._stack;
	}
	return (*this);
}
void RPN::calculate(std::string const &expression)
{
	int			number;
	long int	val2;
	long int	val1;
	long int	res;

	for (size_t i = 0; i < expression.length(); i++)
	{
		if (expression[i] == ' ')
			continue ;
		if (expression[i] >= '0' && expression[i] <= '9')
		{
			number = expression[i] - '0';
			this->_stack.push(number);
		}
		else if (expression[i] == '+' || expression[i] == '-'
			|| expression[i] == '*' || expression[i] == '/')
		{
			if (_stack.size() < 2)
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			val2 = _stack.top();
			_stack.pop();
			val1 = _stack.top();
			_stack.pop();
			res = 0;
			if (expression[i] == '+')
				res = val1 + val2;
			else if (expression[i] == '-')
				res = val1 - val2;
			else if (expression[i] == '*')
				res = val1 * val2;
			else if (expression[i] == '/')
			{
				if (val2 == 0)
				{
					std::cerr << "Error" << std::endl;
					return ;
				}
				res = val1 / val2;
			}
			if (res > INT_MAX || res < INT_MIN)
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			_stack.push(res);
		}
		else
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
	}
	if (_stack.size() == 1)
		std::cout << _stack.top() << std::endl;
	else
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
}

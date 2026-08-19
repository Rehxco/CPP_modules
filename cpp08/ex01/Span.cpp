/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 19:57:48 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/17 20:33:58 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

Span::Span(Span const &other)
{
	std::cout << "Copy constructor called" << std::endl;
}

Span::Span() : limit(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Span::Span(unsigned int limit) : limit(limit)
{
	std::cout << "Parametric constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		limit = other.limit;
		vector = other.vector;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (vector.size() >= limit)
		throw SpanFullException();
	vector.push_back(n);
}
int Span::shortestSpan(void)
{
	if (vector.size() <= 1)
		throw SpanTooSmallException();
}
int Span::longestSpan(void)
{
	if (vector.size() <= 1)
		throw SpanTooSmallException();
	int tmp = std::min_element(vector.begin(), vector.end()) - std::max_element(vector.begin(), vector.end())
}
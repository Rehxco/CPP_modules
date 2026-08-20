/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 19:57:48 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/19 15:31:13 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

Span::Span(Span const &other) : limit(other.limit), vector(other.vector)
{
}

Span::Span() : limit(0)
{
}
Span::Span(unsigned int limit) : limit(limit)
{
}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
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
	int	min_len;
	int	tmp_len;

	if (vector.size() <= 1)
		throw SpanTooSmallException();
	std::vector<int> tmp_vect(vector);
	std::sort(tmp_vect.begin(), tmp_vect.end());
	min_len = tmp_vect[1] - tmp_vect[0];
	tmp_len = 0;
	for (size_t i = 0; i < (tmp_vect.size() - 1); i++)
	{
		tmp_len = tmp_vect[i + 1] - tmp_vect[i];
		if (tmp_len < min_len)
			min_len = tmp_len;
	}
	return (min_len);
}
int Span::longestSpan(void)
{
	if (vector.size() <= 1)
		throw SpanTooSmallException();
	int tmp = *std::max_element(vector.begin(), vector.end())
		- *std::min_element(vector.begin(), vector.end());
	return (tmp);
}
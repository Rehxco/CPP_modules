/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:09 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/17 19:57:24 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <exception>
# include <vector>

class Span
{
  public:
	Span();
	Span(unsigned int limit);
	Span(Span const &other);
	~Span();
	Span &operator=(Span const &other);
	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
	class SpanFullException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Error: Span limit reached");
		}
	};
	class SpanTooSmallException : public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Error: Not enough numbers to calculate a distance.");
		}
	};

  private:
	unsigned int limit;
	std::vector<int> vector;
};

#endif

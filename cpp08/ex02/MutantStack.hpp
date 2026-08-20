/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:09 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/20 18:38:42 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <algorithm>
# include <exception>
# include <stack>

template <typename T> class MutantStack : public std::stack<T>
{
  public:
	MutantStack(MutantStack const &other) : std::stack<T>(other)
	{
	}
	MutantStack()
	{
	}
	~MutantStack()
	{
	}

	MutantStack &operator=(MutantStack const &other)
	{
		if (this != &other)
		{
			std::stack<T>::operator=(other);
		}
		return (*this);
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}

  private:
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:12:45 by sbrochar          #+#    #+#             */
/*   Updated: 2026/09/05 18:28:29 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <sys/time.h>

PmergeMe::PmergeMe(PmergeMe const &other) : _vect(other._vect),
	_deque(other._deque)
{
}

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(PmergeMe const &other)
{
	if (this != &other)
	{
		_vect = other._vect;
		_deque = other._deque;
	}
	return (*this);
}
bool PmergeMe::parsArg(int ac, char **av)
{
	int			j;
	long int	res;

	for (int i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				std::cerr << "Error" << std::endl;
				return (false);
			}
			j++;
		}
		res = atol(av[i]);
		if (res > INT_MAX || res < INT_MIN)
		{
			std::cerr << "Error" << std::endl;
			return(false) ;
		}
		_vect.push_back(res);
		_deque.push_back(res);
	}
	return(true);
}
void PmergeMe::vecAlg(void)
{
	int		last;
	bool	hasLast;
	int		prev;
	int		curr;
	int		next;
	int		max;
	int		min;
	int		index;
	int		target;

	std::vector<std::pair<int, int> > pairs;
	hasLast = false;
	if (_vect.size() < 2)
		return ;
	if (_vect.size() % 2 != 0)
	{
		last = _vect.back();
		hasLast = true;
		_vect.pop_back();
	}
	for (size_t i = 0; i < _vect.size(); i += 2)
	{
		if (_vect[i] > _vect[i + 1])
			pairs.push_back(std::make_pair(_vect[i], _vect[i + 1]));
		else
			pairs.push_back(std::make_pair(_vect[i + 1], _vect[i]));
	}
	_vect.clear();
	for (size_t i = 0; i < pairs.size(); i++)
	{
		for (size_t j = 0; j < pairs.size() - 1; j++)
		{
			if (pairs[j].first > pairs[j + 1].first)
			{
				std::pair<int, int> tmp = pairs[j];
				pairs[j] = pairs[j + 1];
				pairs[j + 1] = tmp;
			}
		}
	}
	std::vector<int> pend;
	_vect.push_back(pairs[0].second);
	_vect.push_back(pairs[0].first);
	for (size_t i = 1; i < pairs.size(); i++)
	{
		_vect.push_back(pairs[i].first);
		pend.push_back(pairs[i].second);
	}
	if (hasLast == true)
	{
		pend.push_back(last);
	}
	std::vector<int> insertOrder;
	prev = 1;
	curr = 3;
	if (pend.empty() == true)
		return ;
	while (1)
	{
		max = curr - 2;
		if (max >= (int)pend.size())
			max = pend.size() - 1;
		min = prev - 1;
		for (int i = max; i >= min; i--)
		{
			insertOrder.push_back(i);
		}
		if (max == (int)pend.size() - 1)
			break ;
		next = curr + 2 * prev;
		prev = curr;
		curr = next;
	}
	for (size_t i = 0; i < insertOrder.size(); i++)
	{
		index = insertOrder[i];
		target = pend[index];
		std::vector<int>::iterator it = std::lower_bound(_vect.begin(),
				_vect.end(), target);
		_vect.insert(it, target);
	}
}
void PmergeMe::dequeAlg(void)
{
	int		last;
	bool	hasLast;
	int		prev;
	int		curr;
	int		next;
	int		max;
	int		min;
	int		index;
	int		target;

	std::deque<std::pair<int, int> > pairs;
	hasLast = false;
	if (_deque.size() < 2)
		return ;
	if (_deque.size() % 2 != 0)
	{
		last = _deque.back();
		hasLast = true;
		_deque.pop_back();
	}
	for (size_t i = 0; i < _deque.size(); i += 2)
	{
		if (_deque[i] > _deque[i + 1])
			pairs.push_back(std::make_pair(_deque[i], _deque[i + 1]));
		else
			pairs.push_back(std::make_pair(_deque[i + 1], _deque[i]));
	}
	_deque.clear();
	for (size_t i = 0; i < pairs.size(); i++)
	{
		for (size_t j = 0; j < pairs.size() - 1; j++)
		{
			if (pairs[j].first > pairs[j + 1].first)
			{
				std::pair<int, int> tmp = pairs[j];
				pairs[j] = pairs[j + 1];
				pairs[j + 1] = tmp;
			}
		}
	}
	std::deque<int> pend;
	_deque.push_back(pairs[0].second);
	_deque.push_back(pairs[0].first);
	for (size_t i = 1; i < pairs.size(); i++)
	{
		_deque.push_back(pairs[i].first);
		pend.push_back(pairs[i].second);
	}
	if (hasLast == true)
	{
		pend.push_back(last);
	}
	std::deque<int> insertOrder;
	prev = 1;
	curr = 3;
	if (pend.empty() == true)
		return ;
	while (1)
	{
		max = curr - 2;
		if (max >= (int)pend.size())
			max = pend.size() - 1;
		min = prev - 1;
		for (int i = max; i >= min; i--)
		{
			insertOrder.push_back(i);
		}
		if (max == (int)pend.size() - 1)
			break ;
		next = curr + 2 * prev;
		prev = curr;
		curr = next;
	}
	for (size_t i = 0; i < insertOrder.size(); i++)
	{
		index = insertOrder[i];
		target = pend[index];
		std::deque<int>::iterator it = std::lower_bound(_deque.begin(),
				_deque.end(), target);
		_deque.insert(it, target);
	}
}

void PmergeMe::displayVect(void)
{
	for (size_t i = 0; i < _vect.size(); i++)
	{
		std::cout << _vect[i] << " ";
	}
	std::cout << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:12:43 by sbrochar          #+#    #+#             */
/*   Updated: 2026/09/30 13:08:20 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <iostream>
# include <string>
# include <sys/time.h>
# include <vector>
#include <utility>


class PmergeMe
{
  public:
	PmergeMe();
	PmergeMe(PmergeMe const &other);
	~PmergeMe();
	PmergeMe &operator=(PmergeMe const &other);
	bool parsArg(int ac, char **av);
	void vecAlg();
	void dequeAlg();
	void displayBefore();
	void displayAfter();

  private:
	std::vector<int> _unsorted;
	std::vector<int> _vect;
	std::deque<int> _deque;
};

#endif
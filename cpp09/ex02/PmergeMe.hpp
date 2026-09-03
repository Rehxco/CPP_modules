/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:12:43 by sbrochar          #+#    #+#             */
/*   Updated: 2026/09/03 19:03:36 by sbrochar         ###   ########.fr       */
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
#include <algorithm>

class PmergeMe
{
  public:
	PmergeMe();
	PmergeMe(PmergeMe const &other);
	~PmergeMe();
	PmergeMe &operator=(PmergeMe const &other);
	void parsArg(int ac, char **av);
	void vecAlg();
	void dequeAlg();

  private:
	std::vector<int> _vect;
	std::deque<int> _deque;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:04:34 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/20 18:51:24 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <stack>
#include <vector>

int	main(void)
{
		std::cout << std::endl;
	std::cout << "*****************************************" << std::endl;
	std::cout << "Test with MutantStack" << std::endl;
	std::cout << "*****************************************" << std::endl;
	std::cout << std::endl;
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;
	std::cout << "*****************************************" << std::endl;
	std::cout << "Test with std::list" << std::endl;
	std::cout << "*****************************************" << std::endl;
	std::cout << std::endl;
	std::list<int> mstack_list;
	mstack_list.push_back(5);
	mstack_list.push_back(17);
	std::cout << mstack_list.back() << std::endl;
	mstack_list.pop_back();
	std::cout << mstack_list.size() << std::endl;
	mstack_list.push_back(3);
	mstack_list.push_back(5);
	mstack_list.push_back(737);
	mstack_list.push_back(0);
	std::list<int>::iterator it2 = mstack_list.begin();
	std::list<int>::iterator ite2 = mstack_list.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<int> s2(mstack);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:03 by sbrochar          #+#    #+#             */
/*   Updated: 2026/09/24 18:15:07 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <exception>

Base::~Base()
{
}
Base	*generate(void)
{
	int	i;

	srand(time(NULL));
	i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}
void	identify(Base *ptr)
{
	if (dynamic_cast<A *>(ptr))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(ptr))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(ptr))
		std::cout << "C" << std::endl;
}

void	identify(Base &ptr)
{
	try
	{
		dynamic_cast<A &>(ptr);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e)
	{
		(void)e;
	}
	try
	{
		dynamic_cast<B &>(ptr);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception &e)
	{
		(void)e;
	}
	try
	{
		dynamic_cast<C &>(ptr);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception &e)
	{
		(void)e;
	}
}

int	main(void)
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;

	return (0);
}
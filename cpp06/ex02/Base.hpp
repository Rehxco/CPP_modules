/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:09 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/26 14:10:40 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <cstdlib>
# include <iostream>

class Base
{
  public:
	virtual ~Base();

  private:
};
Base	*generate(void);
void identify(Base *ptr);
void identify(Base &ptr);
class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

#endif
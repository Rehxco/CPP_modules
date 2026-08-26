/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:12:43 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/26 11:41:14 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>

class RPN
{
  public:
	RPN();
	RPN(RPN const &other);
	~RPN();
	RPN &operator=(RPN const &other);
	void calculate(std::string const &expression);

  private:
	std::stack<int> _stack;
};

#endif
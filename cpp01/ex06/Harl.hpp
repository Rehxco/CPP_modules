/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:37:06 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/12 14:54:18 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <cstdlib>
# include <iomanip>
# include <iostream>
#include <string>
#include <stdio.h>

class Harl
{
  public:
	void complain(std::string level);
	Harl();
	~Harl();

  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
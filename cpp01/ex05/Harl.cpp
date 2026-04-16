/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:37:10 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/12 14:59:10 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	int	i;

	std::string warning_tab[4];
	warning_tab[0] = "DEBUG";
	warning_tab[1] = "INFO";
	warning_tab[2] = "WARNING";
	warning_tab[3] = "ERROR";
	void (Harl::*actions_tab[4])(void);
	actions_tab[0] = &Harl::debug;
	actions_tab[1] = &Harl::info;
	actions_tab[2] = &Harl::warning;
	actions_tab[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		if (level == warning_tab[i])
		{
			(this->*actions_tab[i])();
			break ;
		}
		i++;
	}
}

Harl::Harl()
{
}
Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
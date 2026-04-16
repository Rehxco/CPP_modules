/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:14:47 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/11 18:01:07 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

size_t	search(std::string s1, std::string str, size_t pos)
{
	size_t	i;

	i = str.find(s1, pos);
	return (i);
}

std::string replace(std::string s1, std::string s2, std::string str)
{
	size_t len_s1 = s1.length();
	size_t start = search(s1, str, 0);
	std::string new_str_start;
	std::string new_str_end;

	while (start != std::string::npos)
	{
		new_str_start = str.substr(0, start);
		new_str_end = str.substr(start + len_s1);
		str = new_str_start + s2 + new_str_end;
		start = search(s1, str, start + s2.length());
	}
	return (str);
}
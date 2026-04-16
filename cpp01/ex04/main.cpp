/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:27:21 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/11 18:17:02 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	process_file(std::string s1, std::string s2, std::string original_file)
{
	std::ifstream ifs(original_file.c_str());
	std::ofstream ofs((original_file + ".replace").c_str());
	if (!(ifs.is_open()))
	{
		std::cerr << "Error opening file" << std::endl;
		return ;
	}
	if (!(ofs.is_open()))
	{
		std::cerr << "Error opening file" << std::endl;
		return ;
	}
	std::string line;
	while (std::getline(ifs, line))
	{
		line = replace(s1, s2, line);
		ofs << line << std::endl;
		std::cout << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Bad number argument" << std::endl;
		return (1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string original_file = av[1];
	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cerr << "No word to search for or replace" << std::endl;
		return (1);
	}
	process_file(s1, s2, original_file);
	return (0);
}
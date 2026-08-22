/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:12:45 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/22 16:15:39 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) : _database(other._database)
{
}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
	{
		_database = other._database;
	}
	return (*this);
}

void BitcoinExchange::loadDatabase(std::string const &dbFile)
{
	size_t	commaPos;
	float	priceFloat;

	std::ifstream ifs(dbFile.c_str());
	if (!(ifs.is_open()))
	{
		std::cerr << "Error opening file" << std::endl;
		return ;
	}
	std::string line;
	std::getline(ifs, line);
	while (std::getline(ifs, line))
	{
		commaPos = line.find(',');
		std::string date = line.substr(0, commaPos);
		std::string priceStr = line.substr(commaPos + 1);
		priceFloat = std::atof(priceStr.c_str());
		this->_database[date] = priceFloat;
	}
}

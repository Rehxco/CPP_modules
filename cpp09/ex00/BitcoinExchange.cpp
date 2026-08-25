/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:12:45 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/25 20:59:15 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <stdlib.h>

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
		std::cerr << "Error: could not open file" << std::endl;
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
bool BitcoinExchange::isValidDate(std::string const &date)
{
	int	yearInt;
	int	monthInt;
	int	dayInt;

	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	yearInt = atoi(year.c_str());
	monthInt = atoi(month.c_str());
	dayInt = atoi(day.c_str());
	if (yearInt < 0 || (monthInt < 1 || monthInt > 12) || (dayInt < 1
			|| dayInt > 31))
		return (false);
	else if (monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11)
	{
		if (dayInt > 30)
			return (false);
	}
	else if (monthInt == 2)
	{
		if (yearInt % 4 == 0)
		{
			if (yearInt % 100 == 0 && yearInt % 400 == 0)
			{
				if (dayInt > 29)
					return (false);
			}
			else if (yearInt % 100 == 0 && yearInt % 400 != 0)
			{
				if (dayInt > 28)
					return (false);
			}
			else
			{
				if (dayInt > 29)
					return (false);
			}
		}
		else
		{
			if (dayInt > 28)
				return (false);
		}
	}
	return (true);
}

void BitcoinExchange::processInput(std::string const &inputFile)
{
	size_t	pipePos;
	float	valueFloat;

	std::ifstream ifs(inputFile.c_str());
	if (!(ifs.is_open()))
	{
		std::cerr << "Error: could not open file" << std::endl;
		return ;
	}
	std::string line;
	std::getline(ifs, line);
	while (std::getline(ifs, line))
	{
		if ((pipePos = line.find('|')) == std::string::npos)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue ;
		}
		std::string date = line.substr(0, pipePos - 1);
		if (isValidDate(date) == false)
		{
			{
				std::cerr << "Error: bad input => " << line << std::endl;
				continue ;
			}
		}
		std::string valueStr = line.substr(pipePos + 2);
		valueFloat = std::atof(valueStr.c_str());
		if (valueFloat < 0)
		{
			std::cerr << "Error: not a positive number" << std::endl;
			continue ;
		}
		else if (valueFloat > 1000)
		{
			std::cerr << "Error: too large a number" << std::endl;
			continue ;
		}
		std::map<std::string, float>::iterator it = _database.lower_bound(date);
		if ((it != _database.end() && it->first == date))
			std::cout << date << " => " << valueFloat << " = " << valueFloat
				* it->second << std::endl;
		else if (it == _database.begin())
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue ;
		}
		else
		{
			it--;
			std::cout << date << " => " << valueFloat << " = " << valueFloat
				* it->second << std::endl;
		}
	}
}

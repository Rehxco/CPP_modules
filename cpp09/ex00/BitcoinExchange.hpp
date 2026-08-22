/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:12:43 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/22 15:43:00 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP_HPP

# include <fstream>
# include <iostream>
# include <map>
# include <string>

class BitcoinExchange
{
  public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &other);
	~BitcoinExchange();
	BitcoinExchange &operator=(BitcoinExchange const &other);
	void loadDatabase(std::string const &dbFile);
	void processInput(std::string const &inputFile);

  private:
	std::map<std::string, float> _database;
};

#endif
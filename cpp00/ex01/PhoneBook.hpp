/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:22:21 by sbrochar          #+#    #+#             */
/*   Updated: 2026/02/24 17:03:03 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <cstdlib>
# include <iomanip>
# include <iostream>

class PhoneBook
{
  private:
	Contact tab[8];
	int index;
	int contact_total;

	std::string no_more_ten(std::string str);

  public:
	PhoneBook();
	void add_contact(void);
	void print_phonebook();
	void search_index(std::string command);
};

#endif
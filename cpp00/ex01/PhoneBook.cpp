/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:40:51 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/04 18:10:38 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	contact_total = 0;
}

std::string PhoneBook::no_more_ten(std::string str)
{
	int	len;

	len = str.length();
	if (len > 10)
	{
		str = str.substr(0, 9) + '.';
		return (str);
	}
	return (str);
}

void PhoneBook::add_contact(void)
{
	std::string buffer = "";
	while (buffer.length() == 0)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, buffer);
		if (std::cin.eof())
			exit(0);
	}
	tab[index].set_first_name(buffer);
	buffer = "";
	while (buffer.length() == 0)
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, buffer);
		if (std::cin.eof())
			exit(0);
	}
	tab[index].set_last_name(buffer);
	buffer = "";
	while (buffer.length() == 0)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, buffer);
		if (std::cin.eof())
			exit(0);
	}
	tab[index].set_nickname(buffer);
	buffer = "";
	while (buffer.length() == 0)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, buffer);
		if (std::cin.eof())
			exit(0);
	}
	tab[index].set_phone_number(buffer);
	buffer = "";
	while (buffer.length() == 0)
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, buffer);
		if (std::cin.eof())
			exit(0);
	}
	tab[index].set_darkest_secret(buffer);
	std::cout << "Your contact has been successfully saved in the index " << index << "!" << std::endl;
	index++;
	if (contact_total < 8)
	{
		contact_total++;
	}
	if (index > 7)
		index = 0;
}
void PhoneBook::print_phonebook()
{
	int	i;

	i = 0;
	std::cout << "| " << std::setw(5) << "Index"
				<< " | " << std::setw(10) << "First Name"
				<< " | " << std::setw(10) << "Last Name"
				<< " | " << std::setw(10) << "Nickname"
				<< " |" << std::endl;
	while (i != contact_total)
	{
		std::cout << "| " << std::setw(5) << i << " | " << std::setw(10) << no_more_ten(tab[i].get_first_name()) << " | " << std::setw(10) << no_more_ten(tab[i].get_last_name()) << " | " << std::setw(10) << no_more_ten(tab[i].get_nickname()) << " |" << std::endl;
		i++;
	}
}
void PhoneBook::search_index(std::string command)
{
	int	len;
	int	tmp;

	if (contact_total == 0)
	{
		std::cout << "No contact information recorded" << std::endl;
		return ;
	}
	while (true)
	{
		std::cout << "Enter an index between 0 and 7 or CLOSE to stop the search" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if(command == "CLOSE")
				return ;
		if (((len = command.length()) == 1) && (command[0] >= '0'
				&& command[0] <= '7'))
		{
			tmp = atoi(command.c_str());
			if (tmp < contact_total)
				break ;
		}
		std::cout << "Invalid index, try again" << std::endl;
	}
	std::cout << "**********************" << std::endl;
	std::cout << "Index: " << tmp << std::endl;
	std::cout << "First Name: " << tab[tmp].get_first_name() << std::endl;
	std::cout << "Last Name: " << tab[tmp].get_last_name() << std::endl;
	std::cout << "Nickname: " << tab[tmp].get_nickname() << std::endl;
	std::cout << "Phone Number: " << tab[tmp].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << tab[tmp].get_darkest_secret() << std::endl;
	std::cout << "**********************" << std::endl;
}

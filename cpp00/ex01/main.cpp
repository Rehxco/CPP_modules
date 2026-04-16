/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:11:50 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/04 18:13:22 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phone;
	std::string command;

	std::cout << "Welcome to your PhoneBook!" << std::endl;
	std::cout << "You have three commands at your disposal" << std::endl;
	std::cout << "ADD to add a contact" << std::endl;
	std::cout << "SEARCH to display all contacts or search for a specific one" << std::endl;
	std::cout << "END to close your PhoneBook" << std::endl;
	std::cout << "********************************************" << std::endl;
	while (1)
	{
		std::cout << "Do you want to use the command ADD, SEARCH OR END ?" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (command == "ADD" || command == "SEARCH" || command == "END")
		{
			if (command == "ADD")
				phone.add_contact();
			else if (command == "SEARCH")
			{
				phone.print_phonebook();
				phone.search_index(command);
			}
			else if (command == "END")
				{
					std::cout << "We wish you a very nice day <3" << std::endl;
					return (0);
				}
					
		}
	}
	return (0);
}
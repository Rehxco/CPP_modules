/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:41:01 by sbrochar          #+#    #+#             */
/*   Updated: 2026/02/24 15:46:44 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string Contact::get_first_name(void)
{
	return (this->first_name);
};
std::string Contact::get_last_name(void)
{
	return (this->last_name);
};
std::string Contact::get_nickname(void)
{
	return (this->nickname);
};
std::string Contact::get_phone_number(void)
{
	return (this->phone_number);
};
std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
};

void Contact::set_first_name(std::string str)
{
	first_name = str;
};
void Contact::set_last_name(std::string str)
{
	last_name = str;
};
void Contact::set_nickname(std::string str)
{
	nickname = str;
};
void Contact::set_phone_number(std::string str)
{
	phone_number = str;
};
void Contact::set_darkest_secret(std::string str)
{
	darkest_secret = str;
};
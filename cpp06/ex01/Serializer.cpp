/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:03 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/25 15:21:20 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default constructor called" << std::endl;
}
Serializer::Serializer(Serializer const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	(void)other;
}
Serializer::~Serializer()
{
	std::cout << "Destructor called" << std::endl;
}
Serializer &Serializer::operator=(Serializer const &other)
{
	(void)other;
	return (*this);
}
uintptr_t Serializer::serialize(Data *data)
{
	return (reinterpret_cast<uintptr_t>(data));
}
Data *Serializer::deserialize(uintptr_t number)
{
	return (reinterpret_cast<Data *>(number));
}
int	main(void)
{
	Data data;
	data.name = "Hello";
	std::cout << &data << std::endl;
	uintptr_t number = Serializer::serialize(&data);
	std::cout << number << std::endl;
	Data *ptr;
	ptr = Serializer::deserialize(number);
	std::cout << ptr << std::endl;
	std::cout << ptr->name << std::endl;
	return (0);
}
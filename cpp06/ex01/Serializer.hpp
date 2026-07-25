/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:09 by sbrochar          #+#    #+#             */
/*   Updated: 2026/07/25 15:23:24 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <cstdlib>
# include <iostream>
# include <stdint.h>
# include <string>

struct	Data
{
	std::string name;
};

class Serializer
{
  public:
	static uintptr_t serialize(Data *data);
	static Data *deserialize(uintptr_t number);

  private:
	Serializer();
	Serializer(Serializer const &other);
	~Serializer();
	Serializer &operator=(Serializer const &other);
};

#endif
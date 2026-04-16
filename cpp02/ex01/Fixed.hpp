/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:45 by sbrochar          #+#    #+#             */
/*   Updated: 2026/04/13 11:44:38 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
  public:
	Fixed();
	Fixed(const int integer);
	Fixed(const float number);
	Fixed(Fixed const &other);
	~Fixed();
	Fixed &operator=(Fixed const &other);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

  private:
	int number;
	static const int nb_bits = 8;
};

std::ostream &operator<<(std::ostream &os, Fixed const &other);
#endif
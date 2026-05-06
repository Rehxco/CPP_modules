/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:08:06 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/05 16:58:49 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
  public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &other);
	WrongAnimal(std::string type);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &other);
	 void makeSound() const;
	std::string getType() const;

  protected:
	std::string type;
};

#endif
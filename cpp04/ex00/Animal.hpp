/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:49:45 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/05 16:58:22 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
  public:
	Animal();
	Animal(Animal const &other);
	Animal(std::string type);
	virtual ~Animal();
	Animal &operator=(Animal const &other);
	virtual void makeSound() const;
	std::string getType() const;

  protected:
	std::string type;
};

#endif
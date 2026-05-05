/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:56:20 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/05 16:59:24 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
  public:
	Dog();
	Dog(Dog const &other);
	virtual ~Dog();
	Dog &operator=(Dog const &other);
	virtual void makeSound() const;

  protected:
};

#endif

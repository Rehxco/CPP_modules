/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:56:25 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/06 12:07:21 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  public:
	Cat();
	Cat(Cat const &other);
	virtual ~Cat();
	Cat &operator=(Cat const &other);
	virtual void makeSound() const;

  private:
Brain *brain;
};

#endif

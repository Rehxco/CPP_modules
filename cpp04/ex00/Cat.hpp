/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:56:25 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/05 16:58:31 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
  public:
	Cat();
	Cat(Cat const &other);
	virtual ~Cat();
	Cat &operator=(Cat const &other);
	virtual void makeSound() const;

  protected:
};

#endif

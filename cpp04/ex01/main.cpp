/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:40:06 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/06 14:39:30 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	Animal *tab[10];
	int index = 0;
	while (index < 10)
	{
		if (index <= 4)
		{
			Dog *new_dog = new Dog();
			tab[index] = new_dog;
		}
		else
		{
			Cat *new_cat = new Cat();
			tab[index] = new_cat;
		}
		index++;
	}
	index = 0;
	while (index < 10)
	{
		delete tab[index];
		index++;
	}
	Dog *dog_test = new Dog();
	Dog *dog_test_clone = new Dog(*dog_test);
	Dog *dog_test_2 = new Dog();
	*dog_test_2 = *dog_test;
	delete dog_test;
	delete dog_test_2;
	delete dog_test_clone;
	delete j;
	delete i;

	return (0);
}
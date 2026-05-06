/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:04:37 by sbrochar          #+#    #+#             */
/*   Updated: 2026/05/05 23:25:42 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
#include <iostream>

class Brain
{
  public:
	Brain();
	Brain(Brain const &other);
	~Brain();
	Brain &operator=(Brain const &other);

  private:
	std::string ideas[100];
};

#endif
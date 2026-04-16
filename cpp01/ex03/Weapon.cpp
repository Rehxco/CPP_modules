/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:33:47 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/09 15:40:49 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string tmp)
{
	this->type = tmp;
}
Weapon::Weapon(std::string type)
{
	this->type = type;
}

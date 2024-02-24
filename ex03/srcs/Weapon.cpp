/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:25:55 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 18:41:47 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type): type(type)
{
	
}

Weapon::~Weapon(void)
{
	
}

std::string const &Weapon::getType(void) const
{
	return this->type;
}

void Weapon::setType(std::string const &type)
{
	this->type = type;
}
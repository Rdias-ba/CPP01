/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:39:23 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 16:04:38 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) 
{
	
}

Zombie::~Zombie(void)
{
	std::cout << this->nom << ": Died" << std::endl;
}

void Zombie::setname(std::string name)
{
	this->nom = name;
}

void Zombie::announce(void)
{
	std::cout << this->nom << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
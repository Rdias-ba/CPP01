/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:01:21 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 18:49:24 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name): name(name), weapon(NULL)
{
	
}

HumanB::~HumanB(void)
{
	
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;	
} 

void HumanB::attack(void)
{
	std::cout << this->name << "  attacks with their ";
	
	if (this->weapon == NULL)
		std::cout << " fists" << std::endl;
	else
		std::cout << this->weapon->getType() << std::endl;
}
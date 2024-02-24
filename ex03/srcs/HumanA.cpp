/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:44:02 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 18:46:50 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon const &weapon): name(name), weapon(weapon)
{
	
}

HumanA::~HumanA(void)
{
	
}

void HumanA::attack(void) const
{
	std::cout << this->name << "  attacks with their " << this->weapon.getType() << std::endl;
}
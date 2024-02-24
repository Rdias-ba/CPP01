/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:22:57 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 18:49:14 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(std::string const &name);
		~HumanB(void);
		
		void attack(void);
		void setWeapon(Weapon &weapon); 

	private:
	
		std::string name;
		Weapon *weapon;
};

#endif
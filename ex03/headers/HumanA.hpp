/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:13:35 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 18:47:06 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string const &name, Weapon const &weapon);
		~HumanA(void);
		
		void attack(void) const; 

	private:
	
		std::string name;
		Weapon const &weapon;
};

#endif
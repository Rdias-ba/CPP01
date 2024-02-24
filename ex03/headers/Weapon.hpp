/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:04:02 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 18:34:54 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:

		Weapon(std::string const &type);
		~Weapon(void);
		
		std::string const &getType(void) const;
		void setType(std::string const &type); 

	private:
	
		std::string type;
};

#endif

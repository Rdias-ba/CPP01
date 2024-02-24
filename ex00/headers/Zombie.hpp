/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:23:28 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 15:10:03 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(std::string nom);
		~Zombie(void);
		void announce(void);

	private:
	
		std::string nom;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
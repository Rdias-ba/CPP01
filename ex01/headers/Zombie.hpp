/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:23:28 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 16:03:23 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void setname(std::string name);
		void announce(void);

	private:
	
		std::string nom;
};

Zombie* zombieHorde(int N, std::string name);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:00:20 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 16:09:33 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *new_zombies;
	
	new_zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		new_zombies[i].setname(name);
	
	return (new_zombies);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:11:30 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 16:39:15 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main(void)
{
	std::string nom;
	std::string Nb;
	size_t N;
	
	std::cout << "Entrez le nombre de zombies : ";
	std::cin >> Nb;
	
	while (Nb.find_first_not_of("0123456789") != std::string::npos)
		std::cin >> Nb;
	N = atoi(Nb.c_str());

	std::cout << "Entrez le nom de vos zombies : ";
	std::cin >> nom;
	
	Zombie *horde = zombieHorde(N, nom);
	
	for(size_t i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
	return (0);
}

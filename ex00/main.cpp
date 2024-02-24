/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:20:32 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 16:14:42 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(void)
{
	std::string nom;

	std::cout << "Entrez le nom de votre (Heap)Zombie : ";
	std::cin >> nom;
	
	Zombie *new_zombie = newZombie(nom);
	
	std::cout << "Entrez le nom de votre (Stack)Zombie : ";
	std::cin >> nom;
	randomChump(nom);
	
	std::cout << "Entrez le nom de votre (Stack)Zombie : ";
	std::cin >> nom;
	randomChump(nom);

	new_zombie->announce();
	delete new_zombie;
	
	return (0);
}
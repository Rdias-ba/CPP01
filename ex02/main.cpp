/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:42:52 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/24 16:59:43 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string brain;
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	
	brain = "HI THIS IS BRAIN";
	
	std::cout << "Voici l'adresse de la string en mémoire : "<< &brain << std::endl;
	std::cout << "Voici l'adresse de la string stockée dans stringPTR : "<< stringPTR << std::endl;
	std::cout << "Voici l'adresse de la string stockée dans stringREF : "<< &stringREF << std::endl;	
	std::cout << "Voici la valeur de la string : "<< brain << std::endl;
	std::cout << "Voici la valeur pointée par stringPTR : "<< *stringPTR << std::endl;
	std::cout << "Voici la valeur pointée par stringREF : "<< stringREF << std::endl;
	
	return (0);
}
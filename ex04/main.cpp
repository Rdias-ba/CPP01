/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:11:10 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/01 13:54:42 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string s1;
	std::string s2;
	std::string replacefile;
	std::string file;
	int i;

	if (ac < 4)
	{
		std::cerr << "Paramètres requis: nom s1 s2" << std::endl;
		return (1);
	}
	s1 = av[2];
	s2 = av[3];
	
	// ouverture de l'in file 
	ifs.open(av[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error lors de l'ouverture de: " << av[1] << std::endl;
		return (2);
	}
	
	// création et ouverture de l'out file
	replacefile = av[1];
	replacefile += ".replace";
	ofs.open(replacefile.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error lors de l'ouverture de: " << replacefile << std::endl;
		ifs.close();
		return (3);
	}
	
	// modification des occurance de s1 en s2 dans le fichier
	std::getline(ifs, file, '\0');
	while ((i = file.find(s1)) != -1)
	{
		file.erase(i, s1.length());
		file.insert(i, s2);
	}
	ofs << file;
	
	ifs.close();
	ofs.close();
	return (0);
}

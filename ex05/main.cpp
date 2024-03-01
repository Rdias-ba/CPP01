/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:49:08 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/01 15:13:20 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string message;
	Harl harl;

	std::cout << "Message de Harl: ";
	std::cin >> message;
	while (1)
	{
		if (message == "DEBUG" || message == "INFO" || message == "WARNING" || message == "ERROR")
		{
			harl.complain(message);
			break;
		}
		else
		{
			std::cout << "Message invalide réessayez: ";
			std::cin >> message;
		}
	}
	return (0);
}
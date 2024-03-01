/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:02:27 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/03/01 14:19:09 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	public:
		
			Harl(void);
			~Harl(void);
			
			void complain(std::string level);

	private:
	
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
	
};

#endif
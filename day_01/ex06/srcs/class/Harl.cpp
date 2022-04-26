/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:24 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/09 17:58:52 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
		"pickle-specialketchup burger. I really do !\n" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger ! If you did, I wouldn’t be "
		"asking for more !\n" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		"I’ve been coming for years whereas you started working here since "
		"last month.\n" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager"
		"now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i_level;

	i_level = 0;
	std::string complaint_level[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(complaint_level[i]) == 0)
			break ;
		i_level++;
	}
	switch (i_level)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			_debug();

		case 1:
			std::cout << "[ INFO ]" << std::endl;
			_info();

		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			_warning();

		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			_error();
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
			break;
	}
}

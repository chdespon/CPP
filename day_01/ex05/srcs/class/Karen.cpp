/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:55:24 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/09 16:45:57 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
		"pickle-specialketchup burger. I really do !" << std::endl;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger ! If you did, I wouldn’t be "
		"asking for more !" << std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		"I’ve been coming for years whereas you started working here since "
		"last month." << std::endl;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager"
		"now." << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string complaint_level[] =
	{
		"debug",
		"info",
		"warning",
		"error"
	};

	void	(Karen::*complaint_funct[])(void) =
	{
		&Karen::_debug,
		&Karen::_info,
		&Karen::_warning,
		&Karen::_error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(complaint_level[i]) == 0)
			(this->*complaint_funct[i])();
	}
}

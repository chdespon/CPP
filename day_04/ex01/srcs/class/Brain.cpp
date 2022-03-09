/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:24:41 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/04 17:16:21 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Creation of: Brain" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	*this = cpy;
}

Brain::~Brain(void)
{
	std::cout << "Destruction of: Brain" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	int	i;

	i = 0;
	if (this != &rhs)
	{
		while (i < 100)
		{
			_ideas[i] = rhs._ideas[i];
			i++;
		}
	}
	return (*this);
}

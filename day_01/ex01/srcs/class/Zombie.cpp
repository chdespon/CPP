/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:26:01 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/07 18:02:58 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name + " died" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

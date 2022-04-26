/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:35:28 by chdespon          #+#    #+#             */
/*   Updated: 2022/04/26 18:58:38 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{}

HumanB::~HumanB(void)
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (_weapon == NULL)
		std::cout << _name + " as no weapon " << std::endl;
	else
		std::cout << _name + " attacks with their " << _weapon->getType() << std::endl;
}

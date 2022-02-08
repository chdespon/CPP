/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:35:28 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/08 16:02:57 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{}

HumanB::~HumanB(void)
{
	delete _weapon;
}

void	HumanB::setWeapon(Weapon weapon)
{
	_weapon = new Weapon(weapon);
}

void	HumanB::attack(void)
{
	std::cout << _name + " attacks with their " << _weapon->getType() << std::endl;
}

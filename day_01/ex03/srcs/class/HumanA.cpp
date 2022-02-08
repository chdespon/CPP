/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:35:30 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/08 15:54:53 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,  Weapon &weapon): _name(name), _weapon(weapon)
{}

void	HumanA::attack(void)
{
	std::cout << _name + " attacks with their " << _weapon.getType() << std::endl;
}

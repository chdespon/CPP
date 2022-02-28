/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:24:39 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/28 17:13:19 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
: ClapTrap(), FragTrap(), ScavTrap(), _name("Vincent")
{
	ClapTrap::_name = _name + "_clap_name";
	_HitPoints = FragTrap::_HitPoints;
	_EnergiePoints = ScavTrap::_EnergiePoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap creation of " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	_HitPoints = FragTrap::_HitPoints;
	_EnergiePoints = ScavTrap::_EnergiePoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap creation of " << _name << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy)
{
	*this = cpy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " destructor call" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_HitPoints = rhs._HitPoints;
		_EnergiePoints = rhs._EnergiePoints;
		_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	return (ScavTrap::attack(target));
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap introduces himself" << std::endl;
	std::cout << "My name is : " << _name << " and my clapTrap name is : "
		<< ClapTrap::_name << std::endl;
}

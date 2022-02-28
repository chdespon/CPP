/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:14:48 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/28 17:13:35 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("Vincent")
{
	_HitPoints = 100;
	_EnergiePoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap creation of " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_HitPoints = 100;
	_EnergiePoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap creation of " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	std::cout << "ScavTrap copy of " << _name << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " destructor call" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_EnergiePoints > 0 && _HitPoints > 0)
	{
		_EnergiePoints--;
		std::cout << "ScavTrap " << _name << " attack " << target <<
			" causing " << getAttackDamage() << " points of damage!"
			<< std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " as no Energie or Life he cannot attack"
			<< std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " enter in mode Gate Keeper" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
		_name = rhs._name;
	return (*this);
}

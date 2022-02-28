/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:46:57 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/28 18:17:01 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

ClapTrap::ClapTrap(void):
_name("Vincent"), _HitPoints(10), _EnergiePoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap creation of " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name):
_name(name), _HitPoints(10), _EnergiePoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap creation of " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int HitPoints, int EnergiePoints, int AttackDamage):
_name(name), _HitPoints(HitPoints), _EnergiePoints(EnergiePoints), _AttackDamage(AttackDamage)
{
	std::cout << "ClapTrap creation of " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy):
_name(cpy._name), _HitPoints(10), _EnergiePoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap copy of " << _name << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " destructor call" << std::endl;
}

void	ClapTrap::setHitPoints(int amount)
{
	_HitPoints = amount;
}

void	ClapTrap::setEnergiePoints(int amount)
{
	_EnergiePoints = amount;
}

void	ClapTrap::setAttackDamage(int amount)
{
	_AttackDamage = amount;
}

int	ClapTrap::getHitPoints(void)
{
	return (_HitPoints);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_EnergiePoints > 0 && _HitPoints > 0)
	{
		_EnergiePoints--;
		std::cout << "ClapTrap " << _name << " attack " << target <<
			" causing " << getAttackDamage() << " points of damage!"
			<< std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " as no Energie or Life he cannot attack"
			<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints < 0)
		std::cout << _name << " is dead he cannot take damage anymore" << std::endl;
	else
	{
		_HitPoints -= amount;
		std::cout << _name << " took " << amount
		<< " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergiePoints > 0 && _HitPoints > 0)
	{
		_HitPoints += amount;
		_EnergiePoints--;
		std::cout << _name << " is repair and regains "
			<< amount << " of Life" << std::endl;
	}
	else
		std::cout << _name << " as no Energie or Life he cannot be repair"
			<< std::endl;

}

int	ClapTrap::getEnergiePoints(void)
{
	return (_EnergiePoints);
}

int	ClapTrap::getAttackDamage(void)
{
	return (_AttackDamage);
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
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

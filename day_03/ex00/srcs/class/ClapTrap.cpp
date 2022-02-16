/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:46:57 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/16 18:47:57 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Claptrap.hpp"

ClapTrap::ClapTrap(void):
_name("Vincent"), _HitPoints(10), _EnergiePoints(10), _AttackDamage(0)
{
	std::cout << "Creation of " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name):
_name(name), _HitPoints(10), _EnergiePoints(10), _AttackDamage(0)
{
	std::cout << "Creation of " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy):
_name(cpy._name), _HitPoints(10), _EnergiePoints(10), _AttackDamage(0)
{
	std::cout << "Copy of " << _name << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << _name << " died" << std::endl;
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
	_HitPoints -= amount;
	if (_HitPoints < 0)
		_HitPoints = 0;
	std::cout << "ClapTrap " << _name << " took " << amount
		<< " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergiePoints > 0 && _HitPoints > 0)
	{
		_HitPoints += amount;
		_EnergiePoints--;
		std::cout << "ClapTrap " << _name << " is repair and regains "
			<< amount << " of Life" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " as no Energie or Life he cnnot be repair"
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

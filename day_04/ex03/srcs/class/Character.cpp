/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:31:11 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/09 18:00:10 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void):
ICharacter(), _name(""), _itemLost(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_MateriaLost[i] = NULL;
	}
	std::cout << "Default constructor called (Character)" << std::endl;
}

Character::Character(std::string name):
ICharacter(), _name(name), _itemLost(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_MateriaLost[i] = NULL;
	}
	std::cout << "Named constructor called (Character)" << std::endl;
}

Character::Character(const Character &cpy):
ICharacter(cpy), _name(cpy._name)
{
	_itemLost = cpy._itemLost;
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			_inventory[i] = cpy._inventory[i]->clone();
		if (_MateriaLost[i] != NULL)
			_MateriaLost[i] = cpy._MateriaLost[i]->clone();
	}
	std::cout << "Copy constructor called (Character)" << std::endl;
}

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
			std::cout << i << ": delete inventory" << std::endl;
		}
		if (_MateriaLost[i] != NULL)
		{
			delete _MateriaLost[i];
			std::cout << i << ": delete lost materia" << std::endl;
		}
	}
	std::cout << "Default destructor called (Character)" << std::endl;
}

Character	&Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_itemLost = rhs._itemLost;
		for (size_t i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
				_inventory[i] = rhs._inventory[i]->clone();
			if (_MateriaLost[i] != NULL)
				_MateriaLost[i] = rhs._MateriaLost[i]->clone();
		}
	}
	return (*this);
}

const std::string	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{

	if (m != NULL)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (_inventory[i] == NULL)
			{
				_inventory[i] = m;
				return ;
			}
		}
	}
	std::cout << "you cannot equip " << m->getType() <<
		" your charater invotory is full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (_inventory[idx] == NULL)
			std::cout << "Inventory index empty you cannot unequip materia !"
				<< std::endl;
		else
		{
			if (_itemLost >= 4)
			{
				delete _MateriaLost[_itemLost % 4];
				_MateriaLost[_itemLost % 4] =  NULL;
			}
			_MateriaLost[_itemLost % 4] = _inventory[idx];
			_inventory[idx] = NULL;
			_itemLost++;
		}
	}
	else
		std::cout << "Wrong index for unequip a materia !" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (_inventory[idx] == NULL)
			std::cout << " Inventory index empty you cannot use materia !"
				<< std::endl;
		else
			_inventory[idx]->use(target);
	}
	else
		std::cout << "Wrong index for use a materia !" << std::endl;
}

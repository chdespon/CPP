/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:43:07 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/08 18:52:52 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): IMateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy): IMateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = cpy;
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *Materia)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = Materia;
			return ;
		}
		i++;
	}
	std::cout << "Inventory is full you cannot learn Materia anymore !"
		<< std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			if (_inventory[i]->getType() == type)
				return (_inventory[i]->clone());
		}
	}
	return (NULL);
}

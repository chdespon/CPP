/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:47:37 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/07 15:46:47 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	AAnimal::_type = "Cat";
	_brain = new Brain();
	std::cout << "Creation of: " << _type << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	AAnimal::_type = "Cat";
	std::cout << "Copy of: " << _type << std::endl;
	_brain = new Brain(*cpy._brain);
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Destruction of: " << _type << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MIAOU !!!" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		delete _brain;
		_brain = new Brain(*rhs._brain);
		_type = rhs._type;
	}
	return (*this);
}

Brain*	Cat::get_brain_access( void ) const
{
	return (_brain);
}

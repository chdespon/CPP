/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:38:18 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/07 15:46:56 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): AAnimal()
{
	AAnimal::_type = "Dog";
	_brain = new Brain();
	std::cout << "Creation of: " << _type << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	AAnimal::_type = "Dog";
	std::cout << "Copy of: " << _type << std::endl;
	_brain = new Brain(*cpy._brain);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Destruction of: " << _type << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF !!!" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		delete _brain;
		_brain = new Brain(*rhs._brain);
		_type = rhs._type;
	}
	return (*this);
}

Brain*	Dog::get_brain_access( void ) const
{
	return (_brain);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:38:18 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/02 16:44:34 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	Animal::_type = "Dog";
	std::cout << "Creation of: " << _type << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	*this = cpy;
}

Dog::~Dog(void)
{
	std::cout << "Destruction of: " << _type << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF !!!" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

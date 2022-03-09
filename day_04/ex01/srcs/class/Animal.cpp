/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:17:59 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/02 16:43:02 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Animal")
{
	std::cout << "creation of: " << _type << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	*this = cpy;
}

Animal::~Animal(void)
{
	std::cout << "Destruction of: " << _type << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Rrrrr Rrrrrrr" << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

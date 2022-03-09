/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:56:34 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/04 11:16:27 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
	std::cout << "Creation of: " << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	*this = cpy;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destruction of: " << _type << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sound !!!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

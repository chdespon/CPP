/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:17:59 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/07 15:46:32 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): _type("AAnimal")
{
	std::cout << "creation of: " << _type << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy)
{
	*this = cpy;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destruction of: " << _type << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Rrrrr Rrrrrrr" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

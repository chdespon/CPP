/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:47:37 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/04 15:30:00 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	Animal::_type = "Cat";
	std::cout << "Creation of: " << _type << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	*this = cpy;
}

Cat::~Cat(void)
{
	std::cout << "Destruction of: " << _type << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MIAOU !!!" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

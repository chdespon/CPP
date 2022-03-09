/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:52:31 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/02 16:55:12 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	WrongAnimal::_type = "WrongCat";
	std::cout << "Creation of: " << _type << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	*this = cpy;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destruction of: " << _type << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

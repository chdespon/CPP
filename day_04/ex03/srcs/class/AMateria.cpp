/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:16:34 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/08 17:39:18 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{}

AMateria::AMateria(std::string const &type):_type(type)
{}

AMateria::AMateria(const AMateria &cpy):_type(cpy._type)
{
	*this = cpy;
}

AMateria::~AMateria(void)
{}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << std::endl;
}

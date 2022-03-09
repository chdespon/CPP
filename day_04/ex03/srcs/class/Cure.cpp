/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:48:47 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/09 17:57:31 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void):AMateria("cure")
{
	std::cout << "Default constructor called (Cure)" << std::endl;
}

Cure::Cure(const Cure &cpy):AMateria("cure")
{
	*this = cpy;
	std::cout << "Copy constructor called (Cure)" << std::endl;

}

Cure::~Cure(void)
{
	std::cout << "Default destructor called (Cure)" << std::endl;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		AMateria::_type = rhs._type;
	return (*this);
}

Cure	*Cure::clone(void) const
{
	Cure	*clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << " * heals " << target.getName() << "’s wounds *" << std::endl;
}

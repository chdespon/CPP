/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:19:45 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/09 17:56:25 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Default constructor called (Ice)" << std::endl;
}

Ice::Ice(const Ice &cpy): AMateria("ice")
{
	*this = cpy;
	std::cout << "Copy constructor called (Ice)" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Default destructor called (Ice)" << std::endl;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		AMateria::_type = rhs._type;
	return (*this);
}

Ice	*Ice::clone(void) const
{
	Ice	*clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << " * shoots an ice bolt at " << target.getName()
		<< " *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:28:31 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/28 18:15:16 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("Vincent", 100, 100, 30)
{
	std::cout << "FragTrap creation of " << _name << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap creation of " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	std::cout << "FragTrap copy of " << _name << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " destructor call" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " HEY HIGH FIVE ?!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
		_name = rhs._name;
	return (*this);
}

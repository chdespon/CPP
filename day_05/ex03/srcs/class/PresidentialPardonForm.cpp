/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:28:47 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/14 19:55:24 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
Form("PresidentialPardon", 25, 5), _target("No target")
{
	std::cout << "Default constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardon", 25, 5), _target(target)
{
	std::cout << "Target constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy):
Form("PresidentialPardon", 25, 5), _target(cpy._target)
{
	*this = cpy;
	std::cout << "Copy constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Default destructor called (PresidentialPardonForm)" << std::endl;
}

void	PresidentialPardonForm::executeForm(void) const
{
	std::cout <<_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

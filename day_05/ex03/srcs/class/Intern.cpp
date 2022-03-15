/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:20:42 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/15 17:45:14 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char	*Intern::BadFormNameExeption::what() const throw()
{
	return ("Bad form norm");
}

Intern::Intern(void)
{
	_formName[0] = "robotomy request";
	_formName[1] = "shrubbery creation";
	_formName[2] = "presidential pardon";
	_formType[0] = new RobotomyRequestForm();
	_formType[1] = new ShrubberyCreationForm();
	_formType[2] = new PresidentialPardonForm();
	std::cout << "Default constructor called (Intern)" << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called (Intern)" << std::endl;
}

Intern::~Intern(void)
{
	for (size_t i = 0; i < 3; i++)
		delete _formType[i];
	std::cout << "Default destructor called (Intern)" << std::endl;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
	{}
	return (*this);
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	Form	*clone = NULL;

	for (size_t i = 0; i < 3; i++)
	{
		if (form == _formName[i])
		{
			clone = _formType[i]->clone(target);
			std::cout << "Intern create " << *clone << std::endl;
		}
	}
	if (clone == NULL)
		throw BadFormNameExeption();
	return (clone);
}

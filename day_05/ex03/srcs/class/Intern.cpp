/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:20:42 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 18:34:02 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char	*Intern::BadFormNameExeption::what() const throw()
{
	return ("Intern can't create this Form");
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
	for (size_t i = 0; i < 3; i++)
	{
		_formName[i] = cpy._formName[i];
		_formType[i] = cpy._formType[i];
	}
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
	{
		for (size_t i = 0; i < 3; i++)
		{
			delete _formType[i];
			_formName[i] = rhs._formName[i];
			_formType[i] = rhs._formType[i];
		}
	}
	return (*this);
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	AForm	*clone = NULL;

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

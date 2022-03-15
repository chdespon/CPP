/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:05:06 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/11 14:47:32 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too hight");
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

const char *Form::FormSignedException::what(void) const throw()
{
	return ("Form has been signed already");
}

Form::Form(void):
_name(""), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Default constructor called (Form)" << std::endl;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute):
_name(name), _signed(false), _gradeToSign(grade_to_sign), _gradeToExecute(grade_to_execute)
{
	std::cout << "Name/GradeToSign/GradeToExecute constructor called (Form)" << std::endl;
}

Form::Form(const Form &cpy):
_name(cpy._name), _signed(cpy._signed), _gradeToSign(cpy._gradeToSign), _gradeToExecute(cpy._gradeToExecute)
{
	*this = cpy;
	std::cout << "Copy constructor called (Form)" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Default destructor called (Form)" << std::endl;
}

Form	&Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return (_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (_signed == true)
		throw Form::FormSignedException();
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream	&operator<<(std::ostream &os, const Form &rhs)
{
	if (rhs.getSigned() == false)
		os << "Form " << rhs.getName() << " <unsigned contract> with:";
	else
		os << "Form " << rhs.getName() << " <signed contract> with:";
	os << " Grade to sign -> " << rhs.getGradeToSign() <<
		" and Grade to execute -> " << rhs.getGradeToExecute();
	return (os);
}

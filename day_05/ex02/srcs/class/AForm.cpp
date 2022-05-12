/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:05:06 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 19:21:40 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too hight");
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

const char	*AForm::FormSignedException::what(void) const throw()
{
	return ("AForm has been signed already");
}

const char	*AForm::FormNotSignedException::what(void) const throw()
{
	return ("AForm is not signed");
}

AForm::AForm(void):
_name(""), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Default constructor called (AForm)" << std::endl;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_execute):
_name(name), _signed(false), _gradeToSign(grade_to_sign), _gradeToExecute(grade_to_execute)
{
	if (_gradeToSign < 1 || _gradeToSign > 150)
		throw AForm::GradeTooHighException();
	if (_gradeToExecute < 1 || _gradeToExecute > 150)
		throw AForm::GradeTooHighException();
	std::cout << "Name/GradeToSign/GradeToExecute constructor called (AForm)" << std::endl;
}

AForm::AForm(const AForm &cpy):
_name(cpy._name), _signed(cpy._signed), _gradeToSign(cpy._gradeToSign), _gradeToExecute(cpy._gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToSign > 150)
		throw AForm::GradeTooHighException();
	if (_gradeToExecute < 1 || _gradeToExecute > 150)
		throw AForm::GradeTooHighException();
	std::cout << "Copy constructor called (AForm)" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "Default destructor called (AForm)" << std::endl;
}

AForm	&AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return (*this);
}

std::string	AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getSigned(void) const
{
	return (_signed);
}

int	AForm::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int	AForm::getGradeToExecute(void) const
{
	return (_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (_signed == true)
		throw AForm::FormSignedException();
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

void	AForm::execute_checking(const Bureaucrat & bureaucrat) const
{
	if (this->_signed == false)
		throw AForm::FormNotSignedException();
	if (bureaucrat.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
	std::cout << bureaucrat << " executed " << *this << std::endl;
	executeForm();
}

std::ostream	&operator<<(std::ostream &os, const AForm &rhs)
{
	if (rhs.getSigned() == false)
		os << "Form " << rhs.getName() << " <unsigned contract> with:";
	else
		os << "Form " << rhs.getName() << " <signed contract> with:";
	os << " Grade to sign -> " << rhs.getGradeToSign() <<
		" and Grade to execute -> " << rhs.getGradeToExecute();
	return (os);
}

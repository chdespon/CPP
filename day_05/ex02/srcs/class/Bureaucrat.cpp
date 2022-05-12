/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:47:39 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 19:13:33 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too hight");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

Bureaucrat::Bureaucrat(void): _name(""), _grade(150)
{
	std::cout << "Default constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Name/Grade constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): _name(cpy._name), _grade(cpy._grade)
{
	std::cout << "Copy constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Default destructor called (Bureaucrat)" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void)const
{
	return (_grade);
}

void	Bureaucrat::upgrade(void)
{
	if (_grade > 1)
	{
		_grade--;
		std::cout << _name << " has been promoted" << std::endl;
	}
	else
	{
		std::cout << "Promoted faield !" << std::endl;
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::downgrade(void)
{
	if (_grade < 150)
	{
		_grade++;
		std::cout <<_name << " has been demoted" << std::endl;
	}
	else
	{
		std::cout << "Demoted faield !" << std::endl;
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::signForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " couldn’t sign " << form << " because: " <<
			e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute_checking(*this);
	}
	catch (std::exception & error)
	{
		std::cerr << *this << " cannot execute " << form << " because : " <<
			error.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade();
	return (os);
}

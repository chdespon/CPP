/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:37:30 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 19:11:31 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
AForm("RobotomyRequest", 72, 45), _target("No target")
{
	std::cout << "Default constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
AForm("RobotomyRequest", 72, 45), _target(target)
{
	std::cout << "Target constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy):
AForm(cpy), _target(cpy._target)
{
	std::cout << "Copy constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Default destructor called (RobotomyRequestForm)" << std::endl;
}

void	RobotomyRequestForm::executeForm(void) const
{
	int	i;

	srand(time(0));
	i = rand() % 2;
	std::cout << "Trrrrrrrrrrriiiiiiiiiiit Trrrrrrrrrrriiiiiiiiiiit ! ";
	if (i == 1)
		std::cout << _target << " got successfully robotomized..." << std::endl;
	else
		std::cout << _target << "'s robotomy failed..." << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}

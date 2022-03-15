/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:26:52 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/15 18:23:08 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	Form *scf;
	Form *rrf2;
	Form *wrongName;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Lucas");
	// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf2 = someRandomIntern.makeForm("robotomy request", "Bender");


	try
	{
		wrongName = someRandomIntern.makeForm("robotomy reqfdsuest", "Bender");
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}

	delete rrf;
	delete rrf2;
	delete scf;

	return (0);
}
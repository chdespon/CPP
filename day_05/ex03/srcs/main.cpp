/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:26:52 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 18:05:47 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern someRandomIntern;
	AForm* rrf;
	AForm *scf;
	AForm *rrf2;
	AForm *wrongName;

	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << "\n";
	scf = someRandomIntern.makeForm("shrubbery creation", "Lucas");
	std::cout << "\n";
	rrf2 = someRandomIntern.makeForm("presidential pardon", "Bender");
	std::cout << "\n";

	try
	{
		wrongName = someRandomIntern.makeForm("robotomy requesdfsdst", "Bender");
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	delete rrf;
	delete rrf2;
	delete scf;

	return (0);
}
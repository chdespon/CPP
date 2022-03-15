/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:26:52 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/14 20:00:32 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat	Lucas("Lucas", 2);
	Bureaucrat	Albe("Albe", 148);

	Lucas.upgrade();
	std::cout << Lucas << std::endl;

	Albe.downgrade();
	std::cout << Albe << std::endl;

	std::cout << "\n_____TEST OF SHRUBBERY CREATION FORM_____\n\n";

	ShrubberyCreationForm	scf("fuc*?#!");

	std::cout << scf << std::endl;
	Albe.signForm(scf);
	Lucas.signForm(scf);
	std::cout << std::endl;
	Lucas.executeForm(scf);
	Albe.executeForm(scf);

	std::cout << "\n_____TEST OF ROBOTOMY REQUEST FORM_____\n\n";

	RobotomyRequestForm	rrf("Marvin");

	std::cout << rrf << std::endl;
	Albe.signForm(rrf);
	Lucas.signForm(rrf);
	std::cout << std::endl;
	Lucas.executeForm(rrf);
	Albe.executeForm(rrf);

	std::cout << "\n_____TEST OF PRESIDENTIAL PARDON FORM_____\n\n";

	PresidentialPardonForm	ppf("Arthur");

	std::cout << ppf << std::endl;
	Albe.signForm(ppf);
	Lucas.signForm(ppf);
	std::cout << std::endl;
	Lucas.executeForm(ppf);
	Albe.executeForm(ppf);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:26:52 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 15:54:02 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	Bureaucrat	Lucas("Lucas", 2);
	Bureaucrat	Albe("Albe", 148);

	Lucas.upgrade();
	std::cout << Lucas << "\n";

	Albe.downgrade();
	std::cout << Albe << "\n";

	std::cout << "\n_____TEST OF SHRUBBERY CREATION FORM_____\n\n";

	ShrubberyCreationForm	scf("fuc*?#!");

	std::cout << scf << "\n";
	Albe.signForm(scf);
	Lucas.signForm(scf);
	std::cout << "\n";
	Lucas.executeForm(scf);
	Albe.executeForm(scf);

	std::cout << "\n_____TEST OF ROBOTOMY REQUEST FORM_____\n\n";

	RobotomyRequestForm	rrf("Marvin");

	std::cout << rrf << "\n";
	Albe.signForm(rrf);
	Lucas.signForm(rrf);
	std::cout << "\n";
	Lucas.executeForm(rrf);
	Albe.executeForm(rrf);

	std::cout << "\n_____TEST OF PRESIDENTIAL PARDON FORM_____\n\n";

	PresidentialPardonForm	ppf("Arthur");

	std::cout << ppf << "\n";
	Albe.signForm(ppf);
	Lucas.signForm(ppf);
	std::cout << "\n";
	Lucas.executeForm(ppf);
	Albe.executeForm(ppf);

	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:26:52 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/13 17:19:48 by chdespon         ###   ########.fr       */
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
	try
	{
		std::cout << "-----------------------------------------------" << "\n";
		std::cout << "Creating 3 different bureaucrats and an intern:" << "\n";
		std::cout << "-----------------------------------------------" << "\n";

		Bureaucrat		little_crook("Little Crook", 120);
		Bureaucrat		mafia_boss("Mafia Boss", 40);
		Bureaucrat		the_godfather("The Godfather", 1);
		Intern			Josh;

		std::cout << little_crook << "\n";
		std::cout << mafia_boss << "\n";
		std::cout << the_godfather << "\n";

		std::cout << "\n";
		std::cout << "-------------------------------------" << "\n";
		std::cout << "Creating 3 forms with intern josh:" << "\n";
		std::cout << "-------------------------------------" << "\n";

		AForm	*Shrub_2 = Josh.makeForm("shrubbery creation", "josh");
		AForm	*Robot_2 = Josh.makeForm("robotomy request", "josh");
		AForm	*Pardon_2 = Josh.makeForm("presidential pardon", "josh");

		std::cout << "\n";
		std::cout << "-----------------------------------------" << "\n";
		std::cout << "Signing and executing Josh-created forms:" << "\n";
		std::cout << "-----------------------------------------" << "\n";

		little_crook.signForm(*Shrub_2);
		little_crook.executeForm(*Shrub_2);
		mafia_boss.signForm(*Robot_2);
		mafia_boss.executeForm(*Robot_2);
		the_godfather.signForm(*Pardon_2);
		the_godfather.executeForm(*Pardon_2);

		std::cout << "\n";
		std::cout << "-----------------------------------" << "\n";
		std::cout << "Properly destroying the used forms:" << "\n";
		std::cout << "-----------------------------------" << "\n";

		delete Shrub_2;
		delete Robot_2;
		delete Pardon_2;

		std::cout << "\n";
		std::cout << "--------------------------------------------" << "\n";
		std::cout << "Creating an incorrect form with intern josh:" << "\n";
		std::cout << "--------------------------------------------" << "\n";

		AForm	*nonsense = Josh.makeForm("nonsense", "josh");
		
		std::cout << "If this message is displayed, the error was not properly caught" << "\n";
		delete nonsense;
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << "\n";
	}
	return (0);
}
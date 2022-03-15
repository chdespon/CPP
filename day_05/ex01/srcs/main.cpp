/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:26:52 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/11 15:29:31 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	Charles("Charles", 0);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Lucas("Lucas", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Vincent("Vincent", 2);
		Bureaucrat	Albe("Albe", 148);

		Vincent.upgrade();
		std::cout << Vincent << std::endl;

		Albe.downgrade();
		std::cout << Albe << std::endl;

		Form	fo("fo", 148, 150);

		std::cout << fo << std::endl;
		Albe.signForm(fo);
		Vincent.signForm(fo);
		Vincent.signForm(fo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
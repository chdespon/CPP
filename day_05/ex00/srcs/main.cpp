/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:26:52 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 14:53:11 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	Lucas("Lucas", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Vincent("Vincent", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Charles("Charles", 2);

		std::cout << Charles << " ";
		Charles.upgrade();
		std::cout << Charles << " ";
		Charles.upgrade();
		std::cout << Charles << " ";
		Charles.upgrade();
		std::cout << Charles << " ";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	Albe("Albe", 148);

		std::cout << Albe << " ";
		Albe.downgrade();
		std::cout << Albe << " ";
		Albe.downgrade();
		std::cout << Albe << " ";
		Albe.downgrade();
		std::cout << Albe << " ";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
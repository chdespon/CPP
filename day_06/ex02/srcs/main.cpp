/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:06:54 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/19 12:14:43 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


void	identify(Base *p)
{
	A	*Type_A = dynamic_cast<A*>(p);
	B	*Type_B = dynamic_cast<B*>(p);
	C	*Type_C = dynamic_cast<C*>(p);

	if (Type_A != NULL)
		std::cout << "A";
	else if (Type_B != NULL)
		std::cout << "B";
	else if (Type_C != NULL)
		std::cout << "C";
}

void	identify(Base &p)
{
	try
	{
		A	&Type_A = dynamic_cast<A&>(p);
		(void)Type_A;
		std::cout << "A";
		return ;
	}
	catch (std::exception & error)
	{}
	try
	{
		B	&Type_B = dynamic_cast<B&>(p);
		(void)Type_B;
		std::cout << "B";
		return ;
	}
	catch (std::exception & error)
	{}
	try
	{
		C	&Type_C = dynamic_cast<C&>(p);
		(void)Type_C;
		std::cout << "C";
		return ;
	}
	catch (std::exception & error)
	{}
}

Base	*generate(void)
{
	int	i;

	i = rand() % 3;
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

int	main(void)
{
	srand(time(NULL));
	Base	*base = generate();

	std::cout << "Identification par pointeur : ";
	identify(base);
	std::cout << "\nIdentification par référence : ";
	identify(*base);
	std::cout << std::endl;
	return (0);
}
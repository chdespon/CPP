/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:37:01 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/23 16:38:38 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

static int	createRandInt(void)
{
	int	ret;

	ret = rand();
	if (ret % 2 == 0)
		return (ret);
	return (-1 * ret);
}

int	main(void)
{
	srand(time(0));
	try
	{
		std::cout << "SMALL SPAN TESTt\n";
		Span sp = Span(7);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(-8);
		sp.addNumber(-7);
		std::cout << "Shortest span of test : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span of test : " << sp.longestSpan() << std::endl;
		sp.printTab();
		sp.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\n";
	try
	{
		std::cout << "BIG SPAN TEST\n";
		Span sp = Span(15000);
		std::vector<int> tab(15000);

		std::generate(tab.begin(), tab.end(), createRandInt);
		sp.addNumber(tab.begin(), tab.end());
		std::cout << "Shortest span of test : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span of test : " << sp.longestSpan() << std::endl;
		sp.printTab();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\n";
	try
	{
		std::cout << "OTHER SPAN TEST\n";
		Span sp = Span(0);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		sp.printTab();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

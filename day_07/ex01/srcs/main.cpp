/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:07:47 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/19 18:42:18 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			tabInt[] = {1, 2, 3, 4, 5};
	char		tabChar[] = {'a', 'b', 'c', 'd', 'e'};
	float		tabFloat[] = {43.434f, 323.54f, 2.67f, 1.6f};
	std::string	tabString[] = {"Je", "suis", "une", "string", "tab", "!"};

	std::cout << "Tab Int\n";
	::iter(tabInt, 3,::printArray);
	std::cout << "Tab Char\n";
	::iter(tabChar, 5,::printArray);
	std::cout << "Tab Flaot\n";
	::iter(tabFloat, 4,::printArray);
	std::cout << "Tab Flaot\n";
	::iter(tabString, 5,::printArray);
	return (0);
}
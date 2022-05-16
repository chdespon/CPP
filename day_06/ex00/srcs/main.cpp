/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:36:13 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/16 19:34:57 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionScal.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ConversionScal	conv(av[1]);
		conv.charConvert();
		conv.intConvert();
		conv.floatConvert();
		conv.doubleConvert();
	}
	else
		std::cout << "Invalid number of arguments" << std::endl;
	return (0);
}

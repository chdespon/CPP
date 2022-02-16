/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:46:09 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/16 14:52:48 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "Testing increment/decrement operators overload:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << std::endl << "Testing min max functions:" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << std::endl << "Testing classic + - * / operators overload:" << std::endl;
	a = Fixed((float)10.5);
	Fixed	c = Fixed((float)4.38);

	std::cout << "a = " << a << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "a + c = " << a + c << std::endl;
	std::cout << "a - c = " << a - c << std::endl;
	std::cout << "a * c = " << a * c << std::endl;
	std::cout << "a / c = " <<  a / c << std::endl;

	std::cout << std::endl << "Testing comparison operators overload:" << std::endl;
	std::cout << "a < c: " << (a > c) << std::endl;
	std::cout << "a > c: " << (a < c) << std::endl;
	std::cout << "a <= c: " << (a <= c) << std::endl;
	std::cout << "a >= c: " << (a >= c) << std::endl;
	std::cout << "a == c: " << (a == c) << std::endl;
	std::cout << "a != c: " << (a != c) << std::endl;
	return (0);
}

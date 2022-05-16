/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionScal.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:35:09 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/16 19:37:39 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionScal.hpp"

ConversionScal::ConversionScal(void): _line(NULL)
{}

ConversionScal::ConversionScal(char *line): _line(line)
{}

ConversionScal::ConversionScal(const ConversionScal &cpy)
{
	*this = cpy;
}

ConversionScal::~ConversionScal(void)
{}

void	ConversionScal::charConvert(void)
{
	double	value = strtod(_line, NULL);

	if (isprint(static_cast<char>(value)))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else if (!isprint(static_cast<char>(value)) && errno != ERANGE && std::isfinite(value))
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void	ConversionScal::intConvert(void)
{
	double	value = strtod(_line, NULL);

	if (errno != ERANGE && value <= 2147483647 && value >= -2147483648)
	{
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	}
	else
		std::cout << "int: impossible"<< std::endl;
}

void	ConversionScal::floatConvert(void)
{
	float	value = strtof(_line, NULL);

	if (errno != ERANGE)
	{
		std::cout << "float: " << value;
		if (std::isfinite(value) && value == floor(value))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	else
		std::cout << "float: impossible" << std::endl;
}

void	ConversionScal::doubleConvert(void)
{
	double	value = strtod(_line, NULL);

	if (errno != ERANGE)
	{
		std::cout << "double: " << value;
		if (std::isfinite(value) && value == floor(value))
			std::cout << ".0";
		std::cout << std::endl;
	}
	else
		std::cout << "double: impossible" << std::endl;
}

ConversionScal	&ConversionScal::operator=(const ConversionScal &rhs)
{
	if (this != &rhs)
		_line = rhs._line;
	return (*this);
}

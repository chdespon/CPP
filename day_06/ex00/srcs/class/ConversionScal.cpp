/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionScal.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:35:09 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/18 19:49:04 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConversionScal.hpp"

ConversionScal::ConversionScal(void): _line(NULL), _precision(0)
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
	std::string	line = _line;

	if (line.size() == 1 && !isdigit(_line[0]))
		std::cout << "char: '" << _line << "'" << std::endl;
	else if (isprint(static_cast<char>(value)))
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
	double	value = strtod(_line, NULL);

	if (errno != ERANGE)
	{
		std::cout << "float: " << std::setprecision(_precision) << std::fixed << static_cast<float>(value);
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
		std::cout << "double: " << std::setprecision(_precision) << std::fixed  << value;
		if (std::isfinite(value) && value == floor(value))
			std::cout << ".0";
		std::cout << std::endl;
	}
	else
		std::cout << "double: impossible" << std::endl;
}

void	ConversionScal::setPrecision(void)
{
	char *line = _line;

	while (*line && *line != '.')
		line++;
	if (!line[0] || !isdigit(line[1]))
		_precision = 1;
	int i = 1;
	while (line[i] && isdigit(line[i]))
		i++;
	_precision = i - 1;
}

ConversionScal	&ConversionScal::operator=(const ConversionScal &rhs)
{
	if (this != &rhs)
	{
		_line = rhs._line;
		_precision = rhs._precision;
	}
	return (*this);
}

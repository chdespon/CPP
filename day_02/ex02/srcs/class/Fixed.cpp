/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:43:09 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/11 20:11:07 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	_val = roundf((1 << _bits) * val);
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	_val = val << _bits;
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	float	tmp = (1 << _bits);
	return (_val / tmp);
}

int	Fixed::toInt(void) const
{
	return (_val >> _bits);
}

void	Fixed::setRawBits(const int raw)
{
	_val = raw;
}

int	Fixed::getRawBits(void) const
{
	return (_val);
}

Fixed &	Fixed::operator=(const Fixed &raw)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &raw)
		_val = raw.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed lhs, const Fixed &raw)
{
	_val += raw.getRawBits();
	return (lhs);
}

Fixed	Fixed::operator-(Fixed lhs, const Fixed &raw)
{
	_val -= raw.getRawBits();
	return (lhs);
}

Fixed	Fixed::operator*(Fixed lhs, const Fixed &raw)
{
	_val *= raw.getRawBits();
	return (lhs);
}

Fixed	Fixed::operator/(Fixed lhs, const Fixed &raw)
{
	_val /= raw.getRawBits();
	return (lhs);
}

Fixed	&Fixed::operator++(void)
{
	_val++;
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	_val--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed val(*this);
	++(*this);
	return (val);
}

Fixed	Fixed::operator--(int)
{
	Fixed val(*this);
	--(*this);
	return (val);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (_val == rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (_val < rhs.getRawBits());

}

bool	Fixed::operator!=(const fixed &rhs) const
{
	return (!(*(this == rhs)));
}

bool	Fixed::operator>(const fixed &rhs) const
{
	return (rhs < *this);
}

bool	Fixed::operator<=(const fixed &rhs) const
{
	return (!(*(this > rhs)));
}

bool	Fixed::operator>=(const fixed &rhs) const
{
	return (!(*(this < rhs)));
}

std::ostream	&operator<<(std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return os;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:43:09 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/16 14:12:05 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{}

Fixed::Fixed(const float val)
{
	_val = roundf((1 << _bits) * val);
}

Fixed::Fixed(const int val)
{
	_val = val << _bits;
}

Fixed::Fixed(const Fixed &cpy)
{
	*this = cpy;
}

Fixed::~Fixed(void)
{}

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

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		_val = rhs._val;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &rhs)
{
	Fixed	res;
	res.setRawBits(_val + rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	Fixed	res;
	res.setRawBits(_val - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	Fixed	res;
	int		power;

	power = 256;
	res.setRawBits(roundf((this->toFloat() * rhs.toFloat()) * power));
	return (res);
}

Fixed	Fixed::operator/(const Fixed &raw)
{
	Fixed	res;
	res.setRawBits(_val / raw.getRawBits());
	return (res);
}

Fixed	&Fixed::operator++(void)
{
	_val++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
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
	if (_val == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	if (_val < rhs.getRawBits())
		return (true);
	return (false);
}

bool	operator!=(const Fixed &lhs, const Fixed &rhs)
{
	return !(lhs == rhs);
}
bool	operator>(const Fixed &lhs, const Fixed &rhs)
{
	return rhs < lhs;
}
bool	operator<=(const Fixed &lhs, const Fixed &rhs)
{
	return !(lhs > rhs);
}
bool	operator>=(const Fixed &lhs, const Fixed &rhs)
{
	return !(lhs < rhs);
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return os;
}

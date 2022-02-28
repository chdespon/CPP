/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:21:27 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/16 14:39:45 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void): _x(0), _y(0)
{}

Point::Point(const float x, const float y): _x(x), _y(y)
{}

Point::Point(const Point &cpy)
{
	*this = cpy;
}

Point::~Point(void)
{}

float	Point::getX(void)
{
	return (_x.toFloat());
}

float	Point::getY(void)
{
	return (_y.toFloat());
}

Point	&Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		_x = rhs._x;
		_y = rhs._y;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:20:15 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/16 14:42:16 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &cpy);
		~Point();

		float	getX(void);
		float	getY(void);

		Point	&operator=(const Point &rhs);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif

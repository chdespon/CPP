/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:32:40 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/16 13:52:54 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_val;
		const static int	_bits = 8;

	public:
		Fixed();
		Fixed(float val);
		Fixed(int val);
		Fixed(const Fixed &cpy);
		~Fixed();

		Fixed	&operator=(const Fixed &rhs);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		bool operator==(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;

		void	setRawBits(const int raw);

		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

		static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);
		static Fixed	&max(Fixed &lhs, Fixed &rhs);
		static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
		static Fixed	&min(Fixed &lhs, Fixed &rhs);
};

Fixed			operator+(Fixed &lhs, const Fixed &rhs);
Fixed			operator-(Fixed &lhs, const Fixed &rhs);
Fixed			operator/(Fixed &lhs, const Fixed &rhs);
Fixed			operator*(Fixed &lhs, const Fixed &rhs);
bool			operator!=(const Fixed &lhs, const Fixed &rhs);
bool			operator>(const Fixed &lhs, const Fixed &rhs);
bool			operator<=(const Fixed &lhs, const Fixed &rhs);
bool			operator>=(const Fixed &lhs, const Fixed &rhs);
std::ostream	&operator<<(std::ostream &os, const Fixed &rhs);

#endif

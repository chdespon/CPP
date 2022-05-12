/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:32:40 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/10 15:23:21 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_Val;
		const static int	_Bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &cpy);
		~Fixed();

		Fixed	&operator=(const Fixed &rhs);

		void	setRawBits(const int raw);

		int	getRawBits(void) const;
};

#endif

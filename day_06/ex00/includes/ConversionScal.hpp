/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConversionScal.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:56:44 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/16 19:32:22 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONSCAL_HPP
# define CONVERSIONSCAL_HPP

# include <iostream>
#include <cstdlib>
#include <locale>
#include <math.h>
#include <cerrno>

class ConversionScal
{
	private:
		char	*_line;

	public:
		ConversionScal();
		ConversionScal(char *line);
		ConversionScal(const ConversionScal &cpy);
		~ConversionScal();

		ConversionScal	&operator=(const ConversionScal &rhs);

		void	intConvert();
		void	floatConvert();
		void	doubleConvert();
		void	charConvert();
};

#endif
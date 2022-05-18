/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:38:40 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/18 19:26:53 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Data_HPP
# define Data_HPP

#include <iostream>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

typedef struct		s_Data
{
	char	charData;
	int		intData;
	float	floatData;
	double	doubleData;
}					Data;

void		printData(Data *ptr);

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif
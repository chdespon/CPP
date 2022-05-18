/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:36:13 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/18 19:02:12 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data	data;

	data.charData = 'a';
	data.intData = 462;
	data.floatData = 0.5f;
	data.doubleData = 247.32;

	printData(&data);

	uintptr_t	raw;
	raw = serialize(&data);

	Data	*dataPtr;
	dataPtr = deserialize(raw);

	std::cout << std::endl;
	std::cout << "Original Data structure pointer              : " << &data << std::endl;
	std::cout << "Serialized Data pointer in uintptr_t format  : " << raw << std::endl;
	std::cout << "Deserialized Data structure pointer          : " << dataPtr << std::endl;
	std::cout << std::endl;

	printData(dataPtr);

	return (0);
}

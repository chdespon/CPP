/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:46:01 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/18 18:52:28 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void			printData(Data *ptr)
{
	std::cout << "------------ DATA ------------" << std::endl;
	std::cout << "char Data = " << ptr->charData << std::endl;
	std::cout << "int Data = " << ptr->intData << std::endl;
	std::cout << "float Data = " << ptr->floatData << "f" << std::endl;
	std::cout << "double Data = " << ptr->doubleData << std::endl;
	std::cout << "------------------------------" << std::endl;
}

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
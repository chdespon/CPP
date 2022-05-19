/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:07:01 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/19 18:37:37 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T> void	printArray(const T &e)
{
	std::cout << e << std::endl;
}

template <typename T> void	iter(T *array, size_t len, void(*f)(const T &e))
{
	for (size_t i = 0; i < len; i++)
		(*f)(array[i]);
}

#endif

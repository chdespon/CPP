/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:31:18 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/19 17:53:07 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T> void swap(T &a, T &b )
{
	T	c(a); a=b; b=c;
}

template <typename T> const T &min(const T &a, const T &b)
{
	return !(b<a)?a:b;
}

template <typename T> const T &max(const T &a, const T &b)
{
	return (b<a)?a:b;
}

#endif

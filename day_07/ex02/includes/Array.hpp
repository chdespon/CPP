/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:44:03 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/19 19:15:02 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:
		T				*_content;
		unsigned int	_size;

	public:
		Array():_content(new T[0]), _size(0) {};
		Array(unsigned int n):_content(new T[n]), _size(n){};
		Array(const Array &cpy){*this = cpy;}
		~Array(){delete[] _content;}

		Array	&operator=(const Array &rhs)
		{
			if (this != &rhs)
			{
				delete[] _content;
				_size = rhs._size;
				_content = new T[_size];
				for (size_t i = 0; i < _size; i++)
					_content[i] = rhs._content[i];
			}
			return (*this);
		}

		unsigned int	size(void) const{return (_size);}
};

#endif

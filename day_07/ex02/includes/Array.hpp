/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:44:03 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/20 15:46:34 by chdespon         ###   ########.fr       */
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
		Array(const Array &cpy):_content(new T[cpy._size]), _size(cpy._size)
		{
			for (size_t i = 0; i < _size; i++)
				_content[i] = cpy._content[i];
		}
		~Array(){delete [] _content;}

		Array	&operator=(const Array &rhs)
		{
			if (this != &rhs)
			{
				delete [] _content;
				_size = rhs._size;
				_content = new T[rhs._size];
				for (size_t i = 0; i < rhs._size; i++)
					_content[i] = rhs._content[i];
			}
			return (*this);
		}

		unsigned int	size(void) const{return (_size);}

		T	&operator[](unsigned int i)
		{
			if (i >= _size)
				throw Array::OutOfRange();
			else
				return (_content[i]);
		}

		class OutOfRange : public std::exception
		{
			public :
				virtual const char* what() const throw() {return "Out of range !";}
		};
};

#endif

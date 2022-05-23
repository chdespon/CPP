/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:10:25 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/23 16:16:23 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <cstdlib>
# include <time.h>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_tab;
		Span();

	public:
		Span(unsigned int n);
		Span(const Span &cpy);
		~Span();

		Span	&operator=(const Span &rhs);

		void			addNumber(unsigned int n);
		void			addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			printTab();

		class TabFull : public std::exception
		{
			public :
				virtual const char* what() const throw() {return "Tab is full";}
		};

		class TabNotEnoughNumbers : public std::exception
		{
			public :
				virtual const char* what() const throw() {return "Tab as not enough numbers";}
		};
};

#endif

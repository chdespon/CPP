/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:36:19 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/23 16:15:55 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n):_n(n)
{}

Span::Span(const Span &cpy):_n(cpy._n), _tab(cpy._tab)
{}

Span::~Span(void)
{}

void	Span::addNumber(unsigned int n)
{
	if (_tab.size() >=_n)
		throw TabFull();
	_tab.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (end - start + _tab.size() > _n)
		throw TabFull();
	_tab.insert(_tab.end(), start, end);
}

unsigned int	Span::shortestSpan(void)
{
	if (_tab.size() <= 1)
		throw TabNotEnoughNumbers();

	std::vector<int>	tmp = this->_tab;
	std::sort( tmp.begin(), tmp.end());
	int					diff = tmp[1] - tmp[0];
	int					minspan = diff;

	for (size_t i(1); i < tmp.size() - 1; i++)
	{
		diff = tmp[i + 1] - tmp[i];
		if (diff < minspan)
			minspan = diff;
	}
	return (minspan);
}

unsigned int	Span::longestSpan(void)
{
	if (_tab.size() <= 1)
		throw TabNotEnoughNumbers();

	std::vector<int>	res = _tab;
	std::sort( res.begin(), res.end());
	return (*res.rbegin() - *res.begin());

}

void	Span::printTab(void)
{
	for (size_t i(0); i < _tab.size(); i++)
	{
		std::cout << _tab[i];
		if (i != _tab.size() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
		_tab = rhs._tab;
	}
	return (*this);
}

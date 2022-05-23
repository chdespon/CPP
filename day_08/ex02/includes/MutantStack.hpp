/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:41:34 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/23 18:55:17 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
	private:

	public:
		MutantStack(){};
		MutantStack(const MutantStack & src): std::stack<T>(src) {};
		~MutantStack(){};

		typedef typename std::stack<T>::container_type		c_type;

		typedef typename c_type::iterator					iterator;
		typedef typename c_type::const_iterator				const_iterator;
		typedef typename c_type::reverse_iterator			reverse_iterator;
		typedef typename c_type::const_reverse_iterator		const_reverse_iterator;

		iterator	begin(void){return (this->c.begin());}
		iterator	end(void){return (this->c.end());}

		const_iterator	begin(void) const {return (this->c.begin());}
		const_iterator	end(void) const {return (this->c.end());}

		reverse_iterator	rbegin(void){return (this->c.rbegin());}
		reverse_iterator	rend(void){return (this->c.rend());}

		reverse_iterator	rbegin(void) const {return (this->c.rbegin());}
		reverse_iterator	rend(void) const {return (this->c.rend());}

		MutantStack	&operator=(const MutantStack &rhs)
		{
			if (this != &rhs)
				static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(rhs);
			return (*this);
		}
};

#endif

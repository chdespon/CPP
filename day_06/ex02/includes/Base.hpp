/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:04:24 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/18 19:27:05 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <stdlib.h>
# include <cstdlib>
# include <iostream>
# include <time.h>

class Base
{
	public:
		virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
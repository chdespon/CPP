/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:13:01 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/04 12:03:00 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(const Animal &cpy);
		virtual ~Animal();

		Animal	&operator=(const Animal &rhs);

		virtual void	makeSound() const;

		std::string	getType() const;
};

#endif

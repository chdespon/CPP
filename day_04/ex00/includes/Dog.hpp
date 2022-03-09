/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:24:00 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/02 16:56:06 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();

		Dog	&operator=(const Dog &rhs);

		void	makeSound() const;
};

#endif

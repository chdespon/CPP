/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:24:00 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/04 17:26:17 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();

		Dog	&operator=(const Dog &rhs);

		void	makeSound() const;

		Brain*	get_brain_access( void ) const;
};

#endif

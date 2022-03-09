/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:45:43 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/04 18:09:33 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat();
		Cat(const Cat &cpy);
		~Cat();

		Cat	&operator=(const Cat &rhs);

		void	makeSound() const;

		Brain*	get_brain_access( void ) const;

};

#endif

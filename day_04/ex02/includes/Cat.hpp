/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:45:43 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/11 15:44:21 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const Cat &cpy);
		virtual ~Cat();

		Cat	&operator=(const Cat &rhs);

		void	makeSound() const;

		Brain	*get_brain_access(void) const;

};

#endif

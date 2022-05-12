/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:13:01 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/09 15:05:13 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(const AAnimal &cpy);
		virtual ~AAnimal();

		AAnimal	&operator=(const AAnimal &rhs);

		virtual void	makeSound() const = 0;

		std::string	getType() const;
};

#endif

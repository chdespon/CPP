/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:16:22 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/07 18:52:12 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure &cpy);
		virtual ~Cure();

		Cure	&operator=(const Cure &rhs);

		Cure	*clone(void) const;
		void	use(ICharacter &target);
};

#endif

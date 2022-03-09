/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:14:33 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/08 14:59:41 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	private:

	public:
		Ice();
		Ice(const Ice &cpy);
		virtual ~Ice();

		Ice	&operator=(const Ice &rhs);

		Ice		*clone(void) const;
		void	use(ICharacter &target);
};

#endif

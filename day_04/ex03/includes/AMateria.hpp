/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:55:02 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/08 17:55:05 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &cpy);
		virtual ~AMateria();

		AMateria	&operator=(const AMateria &rhs);

		std::string const & getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif

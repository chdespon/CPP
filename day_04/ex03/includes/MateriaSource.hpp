/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:36:17 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/08 16:30:45 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_inventory[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &rhs);

		void		learnMateria(AMateria *Materia);
		AMateria	*createMateria(const std::string &type);
};

#endif

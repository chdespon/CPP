/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:58:56 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/09 15:10:02 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		size_t		_itemLost;
		AMateria	*_MateriaLost[4];

	public:
		Character();
		Character(std::string name);
		Character(const Character &cpy);
		~Character();

		Character	&operator=(const Character &rhs);

		const std::string	&getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter & target);
};

#endif

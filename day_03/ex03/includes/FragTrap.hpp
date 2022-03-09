/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:25:35 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/02 18:12:26 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "Claptrap.hpp"

# define FragHitPoints 100
# define FragEnergiePoints 100
# define FragAttackdamage 30

class FragTrap : public virtual ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &cpy);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &rhs);

		void	highFivesGuys(void);
};

#endif

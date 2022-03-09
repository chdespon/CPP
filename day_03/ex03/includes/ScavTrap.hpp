/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:15:27 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/02 18:11:31 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "Claptrap.hpp"

# define ScavHitPoints 100
# define ScavEnergiePoints 50
# define ScavAttackdamage 20

class ScavTrap : public virtual ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap &rhs);

		void	guardGate(void);
		void	attack(const std::string& target);
};

#endif

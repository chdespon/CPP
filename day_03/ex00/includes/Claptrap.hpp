/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:39:19 by chdespon          #+#    #+#             */
/*   Updated: 2022/04/26 14:47:56 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int	_HitPoints;
		int	_EnergiePoints;
		int	_AttackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &cpy);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &rhs);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	setHitPoints(int amount);
		void	setEnergiePoints(int amount);
		void	setAttackDamage(int amount);

		int		getHitPoints(void);
		int		getEnergiePoints(void);
		int		getAttackDamage(void);
};

#endif

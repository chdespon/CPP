/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:46:23 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/28 17:11:13 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	Lucas("Lucas");
	DiamondTrap	Vincent;

	Lucas.whoAmI();
	Vincent.whoAmI();
	Lucas.attack("Vincent");
	Vincent.takeDamage(Lucas.getAttackDamage());
	Vincent.attack("Vincent");
	Vincent.takeDamage(Vincent.getAttackDamage());
	Lucas.attack("Vincent");
	Vincent.takeDamage(Lucas.getAttackDamage());
	Lucas.attack("Vincent");
	Vincent.takeDamage(Lucas.getAttackDamage());
	Lucas.attack("Vincent");
	Vincent.takeDamage(Lucas.getAttackDamage());
	Lucas.attack("Vincent");
	Vincent.takeDamage(Lucas.getAttackDamage());
	Lucas.attack("Vincent");
	Vincent.takeDamage(Lucas.getAttackDamage());
	return (0);
}

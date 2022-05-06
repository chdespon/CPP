/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:46:23 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/05 15:07:37 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	Lucas("Lucas");
	ClapTrap	Albe("Albe");

	Lucas.attack("Albe");
	Albe.takeDamage(Lucas.getAttackDamage());
	Lucas.highFivesGuys();
	return (0);
}

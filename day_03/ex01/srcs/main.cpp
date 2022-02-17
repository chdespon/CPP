/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:46:23 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/17 17:18:23 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	Lucas("Lucas");
	ScavTrap	Albe("Albe");
	ScavTrap	Vincent;

	Lucas.attack("Albe");
	Albe.takeDamage(Lucas.getAttackDamage());
	Lucas.attack("Albe");
	Albe.takeDamage(Lucas.getAttackDamage());
	Lucas.attack("Albe");
	Albe.takeDamage(Lucas.getAttackDamage());
	Lucas.attack("Albe");
	Albe.takeDamage(Lucas.getAttackDamage());
	Albe.beRepaired(10);
	Albe.attack("Vincent");
	Vincent.takeDamage(Albe.getAttackDamage());
	Albe.attack("Vincent");
	Vincent.takeDamage(Albe.getAttackDamage());
	Albe.attack("Vincent");
	Vincent.takeDamage(Albe.getAttackDamage());
	Albe.attack("Vincent");
	Vincent.takeDamage(Albe.getAttackDamage());
	Albe.attack("Vincent");
	Vincent.takeDamage(Albe.getAttackDamage());
	Albe.attack("Vincent");
	Vincent.takeDamage(Albe.getAttackDamage());
	Albe.attack("Vincent");
	Vincent.takeDamage(Albe.getAttackDamage());
	Vincent.beRepaired(100);
	Vincent.attack("Albe");
	Albe.takeDamage(Vincent.getAttackDamage());
	Vincent.attack("Albe");
	Albe.takeDamage(Vincent.getAttackDamage());
	Albe.beRepaired(100);
	Vincent.attack("Lucas");
	Lucas.takeDamage(Vincent.getAttackDamage());
	return (0);
}

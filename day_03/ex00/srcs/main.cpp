/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:46:23 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/17 12:48:56 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int	main()
{
	ClapTrap	Lucas("Lucas");
	ClapTrap	Albe("Albe");
	ClapTrap	Vincent;

	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Lucas.attack("Albe");
	Albe.takeDamage(0);
	ClapTrap	cpy(Albe);
	cpy.attack("Albe");
	Albe.attack("Lucas");
	Albe.beRepaired(2);
	Albe.attack("Lucas");
	return (0);
}

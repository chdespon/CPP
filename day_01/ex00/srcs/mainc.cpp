/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:49:31 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/07 17:10:06 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	Albe("Albe");
	Zombie*	Lucas = newZombie("Lucas");

	Albe.announce();
	Lucas->announce();
	randomChump("Charles");
	delete Lucas;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:28:35 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/07 18:17:30 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	N;

	N = 42;
	Zombie*	Horde = zombieHorde(N, "Vincent");
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}

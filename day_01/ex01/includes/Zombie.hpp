/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:28:23 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/07 18:04:11 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();

		void	announce();
		void	set_name(std::string name) {_name = name;}

		std::string	get_name(void) const {return _name;}

};

Zombie* zombieHorde(int N, std::string name);

#endif

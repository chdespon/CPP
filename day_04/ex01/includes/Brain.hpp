/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:23:52 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/04 12:26:45 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(const Brain &cpy);
		~Brain();

		Brain	&operator=(const Brain &rhs);
};

#endif

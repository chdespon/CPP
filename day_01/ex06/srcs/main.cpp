/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:32:27 by chdespon          #+#    #+#             */
/*   Updated: 2022/04/26 16:35:15 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Harl;

	if (argc == 2)
		Harl.complain(std::string(argv[1]));
	else
		std::cout << "Error" << std::endl
			<< "Wrong numbers of arguments" << std::endl;
	return (0);
}

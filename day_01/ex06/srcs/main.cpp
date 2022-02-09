/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:32:27 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/09 17:50:30 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	Karen;

	if (argc == 2)
		Karen.complain(std::string(argv[1]));
	else
		std::cout << "Error" << std::endl
			<< "Wrong numbers of arguments" << std::endl;
	return (0);
}

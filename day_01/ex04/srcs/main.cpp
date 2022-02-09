/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:09:45 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/09 15:48:28 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	file;

	Replace	data(argv);
	if (data.check_args(argc) == false)
		return (0);
	file.open(data.getFilename().c_str());
	if (file.good() == true)
		data.replace_line(file);
	else
		std::cout << "Error" << std::endl << "Wrong name file" << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:09:45 by chdespon          #+#    #+#             */
/*   Updated: 2022/04/27 18:53:47 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	file;

	Replace	data(argc, argv);
	if (data.getError() == true)
		return (0);
	file.open(data.getFilename().c_str());
	if (file.good() == true)
		data.replace_line(file);
	else
		std::cout << "Error" << std::endl << "Wrong name file" << std::endl;
	file.close();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:16:30 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/09 15:49:43 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(char **argv)
: _filename(argv[1]), _toReplace(argv[2]), _replace(argv[3])
{}

bool	Replace::check_args(int argc)
{
	if (argc != 4)
	{
		std::cout << "Error" << std::endl
			<< "Wrong number of arguments" << std::endl;
		return (false);
	}
	if (_toReplace.empty())
	{
		std::cout << "Error" << std::endl << "Empty S1" << std::endl;
		return (false);
	}
	return (true);
}

void	Replace::replace_line(std::ifstream &file)
{
	std::string		line;
	std::string		tmp;
	std::string		name_replace(_filename + ".replace");
	std::ofstream	out_file;

	out_file.open(name_replace.c_str());
	while (std::getline(file, line))
	{
		try
		{
			tmp = line;
			tmp.erase(line.find(_toReplace), _toReplace.size());
			tmp.insert(line.find(_toReplace), _replace.c_str(), _replace.size());
		}
		catch(const std::exception& e)
		{}
		out_file << tmp << std::endl;
	}
	out_file.close();
	file.close();
}

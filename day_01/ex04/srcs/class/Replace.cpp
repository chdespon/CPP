/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:16:30 by chdespon          #+#    #+#             */
/*   Updated: 2022/04/27 18:53:43 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error\n" << "Wrong number of arguments" << std::endl;
		_error = true;
		return ;
	}
	_filename = argv[1];
	_toReplace = argv[2];
	_replace = argv[3];
	if (_toReplace.empty())
	{
		std::cout << "Error\n" << "Empty S1" << std::endl;
		_error = true;
		return ;
	}
	_error = false;
}

void	Replace::replace_line(std::ifstream &file)
{
	std::string		line;
	std::string		tmp;
	std::string		name_replace(_filename + ".replace");
	std::ofstream	out_file;
	size_t			pos;

	out_file.open(name_replace.c_str());
	if (!out_file)
	{
		std::cout << "Can't create the file" << std::endl;
		return ;
	}
	while (std::getline(file, line))
	{
		tmp += line;
		tmp += "\n";
	}
	pos = tmp.find(_toReplace);
	while (pos != std::string::npos)
	{
		tmp.erase(pos, _toReplace.size());
		tmp.insert(pos, _replace.c_str(), _replace.size());
		pos = tmp.find(_toReplace, pos + _replace.size());
	}
	out_file << tmp << std::endl;
	out_file.close();
}

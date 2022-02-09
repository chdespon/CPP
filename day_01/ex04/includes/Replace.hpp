/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:13:41 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/09 14:50:03 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <stdexcept>

class Replace
{
	private:
		std::string	_filename;
		std::string	_toReplace;
		std::string	_replace;

	public:
		Replace(char **argv);
		~Replace() {}

		std::string	getFilename(void) const {return _filename;}
		std::string	getToReplace(void) const {return _toReplace;}
		std::string	getReplace(void) const {return _replace;}

		void	replace_line(std::ifstream &file);
		bool	check_args(int argc);
};

#endif

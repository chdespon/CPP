/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:13:41 by chdespon          #+#    #+#             */
/*   Updated: 2022/04/27 18:16:27 by chdespon         ###   ########.fr       */
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
		bool		_error;

	public:
		Replace(int argc, char **argv);
		~Replace() {}

		std::string	getFilename(void) const {return _filename;}
		std::string	getToReplace(void) const {return _toReplace;}
		std::string	getReplace(void) const {return _replace;}
		bool		getError(void) const {return _error;}

		void	replace_line(std::ifstream &file);
};

#endif

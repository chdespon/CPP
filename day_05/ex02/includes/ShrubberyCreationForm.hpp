/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:55:29 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 15:50:53 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERYCREATIONFORM_HPP
# define SHURBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);

		void	executeForm(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 14:20:37 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 18:21:57 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		std::string	_formName[3];
		AForm		*_formType[3];

	public:
		class BadFormNameExeption: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		Intern();
		Intern(const Intern &cpy);
		~Intern();

		Intern	&operator=(const Intern &rhs);

		AForm	*makeForm(std::string form, std::string target);
};

#endif

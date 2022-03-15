/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:47:38 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/14 17:31:28 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		upgrade(void);
		void		downgrade(void);
		void		signForm(Form &form) const;
		void		executeForm(Form const &form) const;
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif

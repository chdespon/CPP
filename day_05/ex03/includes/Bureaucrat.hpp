/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:47:38 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 16:04:31 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

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
		void		signForm(AForm &form) const;
		void		executeForm(AForm const &form) const;
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:04:14 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/11 13:56:13 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

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

		class FormSignedException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &cpy);
		~Form();

		Form	&operator=(const Form &rhs);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		beSigned(const Bureaucrat &bureaucrat);
};

std::ostream	&operator<<(std::ostream &os, const Form &rhs);

#endif

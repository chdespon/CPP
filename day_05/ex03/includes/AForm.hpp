/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:04:14 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/15 17:44:47 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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

		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		AForm();
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &cpy);
		virtual ~AForm();

		AForm	&operator=(const AForm &rhs);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;
		void			beSigned(Bureaucrat const &bureaucrat);
		void			execute_checking(Bureaucrat const &bureaucrat) const;
		virtual void	executeForm(void) const = 0;
		virtual AForm	*clone(std::string target) = 0;


};

std::ostream	&operator<<(std::ostream &os, const AForm &rhs);

#endif
